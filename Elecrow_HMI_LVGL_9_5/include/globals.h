#pragma once

#include <Arduino.h>
#include "Wire.h"

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

extern void blink_timer_init();
extern bool delayNonBlocking(unsigned long ms);
extern void i2c_scan(TwoWire *bus);
extern void printSystemStatus();