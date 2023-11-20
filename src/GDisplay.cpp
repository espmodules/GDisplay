#include "GDisplay.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

GDisplay::GDisplay() {
  // Construtor
}
void GDisplay::init() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.display();
}

void GDisplay::writeText(const char* TextEntrada, int TextSize) {
  display.setTextSize(TextSize);
  display.setTextColor(SSD1306_WHITE);
  display.print(TextEntrada);
  display.print("\n");
  display.display();
}
