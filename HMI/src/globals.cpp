#include "globals.h"
#include <Arduino.h>
#include "display.h"

blink_timers_t blink;

static esp_timer_handle_t blink_timer;

// 50ms Callback
void blink_timer_callback(void *arg)
{
    blink.count++;
    if (blink.count >= 160)
        blink.count = 0;

    blink.t50   = (blink.count % 2) < 1;
    blink.t100  = (blink.count % 4) < 2;
    blink.t200  = (blink.count % 8) < 4;
    blink.t400  = (blink.count % 16) < 8;
    blink.t500  = (blink.count % 20) < 10;
    blink.t800  = (blink.count % 32) < 16;
    blink.t1000 = (blink.count % 40) < 20;
    blink.t1600 = (blink.count % 64) < 32;
    blink.t2000 = (blink.count % 80) < 40;
}

void blink_timer_init()
{
    const esp_timer_create_args_t timer_args = {.callback              = &blink_timer_callback,
                                                .arg                   = nullptr,
                                                .dispatch_method       = ESP_TIMER_TASK,
                                                .name                  = "blink_timer",
                                                .skip_unhandled_events = false};

    esp_timer_create(&timer_args, &blink_timer);
    esp_timer_start_periodic(blink_timer, 50000); // 50000 µs = 50ms
}

void i2c_scan(TwoWire *bus) // Aufruf: i2c_scan(&Wire); oder i2c_scan(&Wire1);
{
    Serial.println("Scanning...");

    for (byte addr = 1; addr < 127; addr++)
    {
        bus->beginTransmission(addr);
        if (bus->endTransmission() == 0)
        {
            Serial.printf("FOUND: 0x%02X\n", addr);
        }
    }

    Serial.println("Scan Done...");
}

bool delayNonBlocking(unsigned long ms)
{
    static unsigned long start  = 0;
    static bool          active = false;

    if (!active)
    {
        active = true;
        start  = millis();
    }

    if (millis() - start >= ms)
    {
        active = false;
        return true;
    }

    return false;
}

void printSystemStatus()
{
    Serial.println("=== ESP32-S3 System Status ===");

    // Flash
    Serial.printf("Flash used: %u bytes\n", ESP.getSketchSize());
    Serial.printf("Flash free: %u bytes\n", ESP.getFreeSketchSpace());

    // Heap (interner RAM)
    Serial.printf("Free heap: %u bytes\n", esp_get_free_heap_size());

    // PSRAM
    Serial.printf("PSRAM total: %u bytes\n", heap_caps_get_total_size(MALLOC_CAP_SPIRAM));
    Serial.printf("PSRAM free : %u bytes\n", heap_caps_get_free_size(MALLOC_CAP_SPIRAM));

    // LVGL Memory
    lv_mem_monitor_t mon;
    lv_mem_monitor(&mon);
    Serial.printf("LVGL used: %u bytes\n", mon.total_size - mon.free_size);
    Serial.printf("LVGL free: %u bytes\n", mon.free_size);
    Serial.printf("LVGL frag: %u %%\n", mon.frag_pct);

    Serial.println("==============================");
}

bool detectRisingEdge(bool current, bool &last)
{
    bool rising = (!last && current);
    last        = current;
    return rising;
}

uint16_t clamp(uint16_t value, uint16_t minVal, uint16_t maxVal)
{
    if (value < minVal)
        return minVal;
    if (value > maxVal)
        return maxVal;
    return value;
}

void setVisibility(lv_obj_t *obj, bool visible)
{
    if (visible)
        lv_obj_clear_flag(obj, LV_OBJ_FLAG_HIDDEN);
    else
        lv_obj_add_flag(obj, LV_OBJ_FLAG_HIDDEN);
}
