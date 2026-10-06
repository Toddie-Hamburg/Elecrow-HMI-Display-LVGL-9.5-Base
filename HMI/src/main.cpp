#include <Arduino.h>
#include "display.h"
#include "ui/ui.h"
#include "globals.h"
#include "sd_card.h"

void setup()
{
    Serial.begin(115200);

    blink_timer_init();

    lv_init();
    display_init();
    display_setBrightness(95);
    ui_init();
    display_update();

    sd_init();
}

void loop()
{
    display_update();

    sd_loop();

    delay(5);
}
