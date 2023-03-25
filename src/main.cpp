#include <Arduino.h>

/*
 *  Project Blink_00
 *  Hace parpadear el LED interno y envia el estado por el monitor serie
 */

static const int tdelay = 500;

void
setup(void)
{
    pinMode(LED,OUTPUT);
    Serial.begin(BAUD);
}

void
loop(void)
{
    digitalWrite(LED,HIGH);
    Serial.println("on");
    delay(tdelay);

    digitalWrite(LED,LOW);
    Serial.println("off");
    delay(tdelay);
}
