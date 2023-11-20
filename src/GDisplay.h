#ifndef GDisplay_h
#define GDisplay_h

#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

class GDisplay {
  public:
    GDisplay();
    void init();
    void writeText(const char* TextEntrada, int TextSize);
};


#endif