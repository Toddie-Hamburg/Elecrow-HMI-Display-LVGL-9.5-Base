#include "display.h"
#include <Arduino.h>
#include <lvgl.h>
#include <TAMC_GT911.h>

extern LGFX lcd;

static lv_color_t *lv_buf;     // LVGL Renderbuffer
static lv_color_t *lv_buf2;    // optional double-buffer

TAMC_GT911 ts(
    TOUCH_SDA,
    TOUCH_SCL,
    TOUCH_INT,
    TOUCH_RST,
    SCREEN_WIDTH,
    SCREEN_HEIGHT
);

static int touch_last_x = 0;
static int touch_last_y = 0;

static bool touch_touched_flag = false;
static bool touch_released_flag = false;

void touch_read(lv_indev_t *indev, lv_indev_data_t *data)
{
    ts.read();

    if (ts.isTouched)
    {
        touch_touched_flag = true;

        touch_last_x = map(ts.points[0].x, TOUCH_MAP_X1, TOUCH_MAP_X2, 0, SCREEN_WIDTH - 1);
        touch_last_y = map(ts.points[0].y, TOUCH_MAP_Y1, TOUCH_MAP_Y2, 0, SCREEN_HEIGHT - 1);

        data->state   = LV_INDEV_STATE_PRESSED;
        data->point.x = touch_last_x;
        data->point.y = touch_last_y;
    }
    else
    {
        data->state = LV_INDEV_STATE_RELEASED;
    }
}

void touch_init(lv_display_t *disp)
{
    Wire.begin(TOUCH_SDA, TOUCH_SCL);

    ts.begin();
    ts.setRotation(TOUCH_GT911_ROTATION);

    lv_indev_t *indev = lv_indev_create();
    lv_indev_set_type(indev, LV_INDEV_TYPE_POINTER);
    lv_indev_set_read_cb(indev, touch_read);

    lv_indev_set_display(indev, disp);
}

void display_flush(lv_display_t *disp, const lv_area_t *area, uint8_t *px_map)
{
    uint32_t w = area->x2 - area->x1 + 1;
    uint32_t h = area->y2 - area->y1 + 1;

    lcd.pushImageDMA(area->x1, area->y1, w, h, (lgfx::rgb565_t *)px_map);

    lv_display_flush_ready(disp);
}

void display_init()
{
    lcd.begin();
    lcd.fillScreen(TFT_BLACK);

    lv_tick_set_cb([]() -> uint32_t { return millis(); });

    // LVGL Display
    lv_display_t *disp = lv_display_create(SCREEN_WIDTH, SCREEN_HEIGHT);

    lv_display_set_flush_cb(disp, display_flush);

    // LVGL Renderbuffer!
    lv_buf  = (lv_color_t *)heap_caps_malloc(SCREEN_WIDTH * 40 * sizeof(lv_color_t), MALLOC_CAP_8BIT);
    lv_buf2 = (lv_color_t *)heap_caps_malloc(SCREEN_WIDTH * 40 * sizeof(lv_color_t), MALLOC_CAP_8BIT);

    lv_display_set_buffers(
        disp,
        lv_buf,
        lv_buf2,
        SCREEN_WIDTH * 40 * sizeof(lv_color_t),
        LV_DISPLAY_RENDER_MODE_PARTIAL
    );

    // Touch
    touch_init(disp);

    // Backlight
    ledcSetup(1, 300, 8);
    ledcAttachPin(Pin_backlight, 1);
    ledcWrite(1, 255);
}
