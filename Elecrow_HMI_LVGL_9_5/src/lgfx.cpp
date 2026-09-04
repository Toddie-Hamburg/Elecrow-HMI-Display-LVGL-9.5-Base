#include "display.h"

LGFX lcd;

LGFX::LGFX(void)
{
    auto cfg = _bus_instance.config();
    cfg.panel = &_panel_instance;

    cfg.pin_d0 = Pin_d0;
    cfg.pin_d1 = Pin_d1;
    cfg.pin_d2 = Pin_d2;
    cfg.pin_d3 = Pin_d3;
    cfg.pin_d4 = Pin_d4;

    cfg.pin_d5  = Pin_d5;
    cfg.pin_d6  = Pin_d6;
    cfg.pin_d7  = Pin_d7;
    cfg.pin_d8  = Pin_d8;
    cfg.pin_d9  = Pin_d9;
    cfg.pin_d10 = Pin_d10;

    cfg.pin_d11 = Pin_d11;
    cfg.pin_d12 = Pin_d12;
    cfg.pin_d13 = Pin_d13;
    cfg.pin_d14 = Pin_d14;
    cfg.pin_d15 = Pin_d15;

    cfg.pin_henable = Pin_henable;
    cfg.pin_vsync   = Pin_vsync;
    cfg.pin_hsync   = Pin_hsync;
    cfg.pin_pclk    = Pin_pclk;

    cfg.freq_write = 15000000;

    cfg.hsync_polarity   = 0;
    cfg.hsync_front_porch = 40;
    cfg.hsync_pulse_width = 48;
    cfg.hsync_back_porch  = 40;

    cfg.vsync_polarity   = 0;
    cfg.vsync_front_porch = 1;
    cfg.vsync_pulse_width = 31;
    cfg.vsync_back_porch  = 13;

    cfg.pclk_active_neg = 1;
    cfg.de_idle_high    = 0;
    cfg.pclk_idle_high  = 0;

    _bus_instance.config(cfg);

    auto pcfg = _panel_instance.config();
    pcfg.memory_width  = SCREEN_WIDTH;
    pcfg.memory_height = SCREEN_HEIGHT;
    pcfg.panel_width   = SCREEN_WIDTH;
    pcfg.panel_height  = SCREEN_HEIGHT;
    pcfg.offset_x = 0;
    pcfg.offset_y = 0;
    _panel_instance.config(pcfg);

    _panel_instance.setBus(&_bus_instance);
    setPanel(&_panel_instance);
}
