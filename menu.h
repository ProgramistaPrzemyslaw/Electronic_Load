#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <splash.h>
#include "AiEsp32RotaryEncoder.h"
#include <string>
#include <stdio.h>
#include <math.h>
#include <cstdint>

uint32_t ChangeArrayToInt(uint8_t InArr[]);
void zeroArray(uint8_t InArr[]);