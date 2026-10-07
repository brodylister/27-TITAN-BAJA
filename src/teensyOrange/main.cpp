/**
 * @file        main.cpp
 * @brief       FreeRTOS main file for central node teensyOrange
 *
 * @details     Runs temporary Blink program:
 *              LED_BUILTIN on for 250ms, off for 250ms, forever
 *
 * @hardware    ORANGE - no dependencies yet
 *
 * @depends     Requires Arduino.h and FreeRTOS includes from PlatformIO
 *
 * @rtos_note   <WIP
 *              FreeRTOS-specific context, if applicable. e.g. "Functions
 *              here are called only from motorTask - NOT ISR-safe" or
 *              "Uses xQueue defined in shared_queues.h">
 *
 * @author      Brody Lister
 * @date        2026-10-01
 */

#include <Arduino.h>



// put function declarations here:
void blink();

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  blink();
}

// put function definitions here:
void blink() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);
}