# Arduino OLED Display Example

This project demonstrates how to use a 128x64 OLED display (SSD1306 driver) with an Arduino via the I²C protocol.  
It shows how to display text, symbols, and simple graphics using the Adafruit libraries.

---

## Features
- Displays custom text on OLED.
- Uses the **Adafruit SSD1306** and **Adafruit GFX** libraries.
- Simple I²C wiring (only 2 data pins needed).
- Beginner-friendly code.

---

## Requirements

### Hardware
- Arduino Uno (or compatible board)
- 128x64 OLED display (SSD1306, I²C)
- Jumper wires

### Software
- Arduino IDE
- Libraries:
  - [Adafruit SSD1306](https://github.com/adafruit/Adafruit_SSD1306)
  - [Adafruit GFX](https://github.com/adafruit/Adafruit-GFX-Library)

You can install them from Arduino IDE → **Sketch → Include Library → Manage Libraries…**

---

## Wiring
| OLED Pin | Arduino Pin |
|----------|-------------|
| VCC      | 5V (or 3.3V, depending on module) |
| GND      | GND         |
| SDA      | A4 (Uno/Nano) |
| SCL      | A5 (Uno/Nano) |

---

## Usage
1. Connect the OLED display to your Arduino using the wiring above.  
2. Open `OLED_display.ino` in Arduino IDE.  
3. Install the required libraries if not already installed.  
4. Select your Arduino board and COM port.  
5. Upload the sketch.  
6. Your OLED should display the demo text/graphics.

---

## Example Output
Hello, World!
Arduino + OLED
