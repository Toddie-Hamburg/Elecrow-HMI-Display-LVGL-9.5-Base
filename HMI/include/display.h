#pragma once
#include <lvgl.h>
#include <LovyanGFX.hpp>
#include <lgfx/v1/platforms/esp32s3/Bus_RGB.hpp>
#include <lgfx/v1/platforms/esp32s3/Panel_RGB.hpp>
#include <TAMC_GT911.h>

// #define ELECROW_5INCH_HMI

#ifndef ELECROW_5INCH_HMI
#define ELECROW_7INCH_HMI
#endif

#if defined ELECROW_5INCH_HMI
#define Pin_d0 8  // B0
#define Pin_d1 3  // B1
#define Pin_d2 46 // B2
#define Pin_d3 9  // B3
#define Pin_d4 1  // B4

#define Pin_d5  5  // G0
#define Pin_d6  6  // G1
#define Pin_d7  7  // G2
#define Pin_d8  15 // G3
#define Pin_d9  16 // G4
#define Pin_d10 4  // G5

#define Pin_d11 45 // R0
#define Pin_d12 48 // R1
#define Pin_d13 47 // R2
#define Pin_d14 21 // R3
#define Pin_d15 14 // R4

#define Pin_hsync   39 // HSYNC
#define Pin_vsync   41 // VSYNC
#define Pin_henable 40 // HENABLE
#define Pin_pclk    0  // PCLK

#define Pin_backlight 2 // BACKLIGHT

#define SCREEN_WIDTH  800 // WIDTH
#define SCREEN_HEIGHT 480 // HEIGHT
#endif

#if defined ELECROW_7INCH_HMI
#define Pin_d0 15 // B0
#define Pin_d1 7  // B1
#define Pin_d2 6  // B2
#define Pin_d3 5  // B3
#define Pin_d4 4  // B4

#define Pin_d5  9  // G0
#define Pin_d6  46 // G1
#define Pin_d7  3  // G2
#define Pin_d8  8  // G3
#define Pin_d9  16 // G4
#define Pin_d10 1  // G5

#define Pin_d11 14 // R0
#define Pin_d12 21 // R1
#define Pin_d13 47 // R2
#define Pin_d14 48 // R3
#define Pin_d15 45 // R4

#define Pin_hsync   39 // HSYNC
#define Pin_vsync   40 // VSYNC
#define Pin_henable 41 // HENABLE
#define Pin_pclk    0  // PCLK

#define Pin_backlight 2 // BACKLIGHT

#define SCREEN_WIDTH  800 // WIDTH
#define SCREEN_HEIGHT 480 // HEIGHT
#endif

#if defined ELECROW_5INCH_HMI
#define TOUCH_SDA 19
#define TOUCH_SCL 20
#define TOUCH_INT 10
#define TOUCH_RST 11
#endif

#if defined ELECROW_7INCH_HMI
#define TOUCH_SDA 19
#define TOUCH_SCL 20
#define TOUCH_INT 10
#define TOUCH_RST 11
#endif

// GT911 Rotation
#define TOUCH_GT911_ROTATION ROTATION_NORMAL

// Mapping für Elecrow 7"
#define TOUCH_MAP_X1 SCREEN_WIDTH
#define TOUCH_MAP_X2 0
#define TOUCH_MAP_Y1 SCREEN_HEIGHT
#define TOUCH_MAP_Y2 0

class LGFX : public lgfx::LGFX_Device
{
private:
    lgfx::Bus_RGB   _bus_instance;
    lgfx::Panel_RGB _panel_instance;

public:
    LGFX(void);
};

extern LGFX lcd;

extern void display_init();
extern void display_update();
extern void display_flush(lv_display_t *disp, const lv_area_t *area, uint8_t *px_map);
extern void display_setBrightness(uint8_t value);

extern void touch_init(lv_display_t *disp);
extern void touch_read(lv_indev_t *indev, lv_indev_data_t *data);