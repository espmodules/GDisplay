Mono Cromatico 128x64 OLED display com I2C interface

![SSD1306](docs/resources/imgs/board.svg)

O endereço padrão do I2C do modulo SSD1306 é 0x3c (60). Outros modulos podem ter um endereço diferente (0x3d), você pode alterar o endereço modificando o diagram.json e as configurações do `i2cAddress` via atributo para "0x3d".

## Pin names

| Name | Description    | ESP32 C3 |
| ---- | -------------- | -------- |
| GND  | Ground         | GND      |
| VCC  | Supply voltage | 3V       |
| SCK  | I2C clock line | GPI09    |
| SDA  | I2C data line  | GPIO8    |

## Exemplo de uso do módulo

```c++
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

```
