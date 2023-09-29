// simple project using Arduino Giga R1 Wifi and Giga Display Shield 
// the sketch will draw a fullsceen 800x480px image of keyboard
// created by upir, 2023
// youtube channel: https://www.youtube.com/upir_upir

// YOUTUBE VIDEO: https://youtu.be/qsxlNb2tpcY
// Source files: https://github.com/upiir/arduino_giga_display_shield

// links from the video:
// Giga Display Shield: https://store.arduino.cc/products/giga-display-shield
// Image Converter: https://lvgl.io/tools/imageconverter
// Hex to text file converter: https://tomeko.net/online_tools/file_to_hex.php?lang=en
// My favorite USB-C cable: https://s.click.aliexpress.com/e/_Dmpk4ht


// Related videos:
// DIY Typewriter: https://youtu.be/ATPutFn6jfk
// Arduino Numpad Display Project: https://youtu.be/GuEdR9CSPck
// My biggest project so far...: https://youtu.be/tQaJ0RHUIi0
// Car gauges with Nextion Display: https://youtu.be/NpZMQjdKxBI



#include "Arduino_H7_Video.h"
#include "ArduinoGraphics.h"
#include "img_keyboard.h"

Arduino_H7_Video Display(800, 480, GigaDisplayShield);

Image img_keyboard(ENCODING_RGB16, (uint8_t *) texture_raw, 800, 480);

void setup() {
  Display.begin();

  Display.beginDraw();
  Display.image(img_keyboard, 0, 0);
  Display.endDraw();
}

void loop() { }