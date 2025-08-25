#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC,0x3C);
  display.clearDisplay();
  display.setCursor(10, 10);
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.print("Hello Sonia");
  display.drawCircle(64, 32, 10, WHITE);
  display.drawTriangle(20, 30, 45, 60, 70, 45, WHITE);
  display.display();
}

void loop() {
  // display.startscrollleft(0, 7);

}
