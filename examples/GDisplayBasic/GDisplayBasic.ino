#include <GDisplay.h>

GDisplay gDisplay;

void setup() {
  gDisplay.init();
  gDisplay.writeText("Texto 1", 1);
  gDisplay.writeText("Texto 2", 2);
  gDisplay.writeText("Texto 3", 3); 
}

void loop() {
  // Seu código
}
