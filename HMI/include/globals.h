#pragma once

#include <Arduino.h>
#include "Wire.h"
#include "display.h"

#define ONCE true
#define POLL false
struct blink_timers_t
{
    volatile uint8_t  pending_ticks = 0;
    volatile uint16_t count         = 0;

    bool t50   = false;
    bool t100  = false;
    bool t200  = false;
    bool t400  = false;
    bool t500  = false;
    bool t800  = false;
    bool t1000 = false;
    bool t1600 = false;
    bool t2000 = false;
};
extern blink_timers_t blink;

extern void     blink_timer_init();
extern bool     delayNonBlocking(unsigned long ms);
extern void     i2c_scan(TwoWire *bus);
extern void     printSystemStatus();
extern bool     detectRisingEdge(bool current, bool &last);
extern uint16_t clamp(uint16_t value, uint16_t minVal, uint16_t maxVal);
extern void     setVisibility(lv_obj_t *obj, bool visible);