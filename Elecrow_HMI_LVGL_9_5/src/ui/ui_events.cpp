#include <Arduino.h>

#include "ui.h"

void evButton1Released(lv_event_t * e)
{
	Serial.println("BUTTON 1 RELEASED");
}

void evButton2Released(lv_event_t * e)
{
	Serial.println("BUTTON 2 RELEASED");
}

void evButton3Released(lv_event_t * e)
{
	Serial.println("BUTTON 3 RELEASED");
}
