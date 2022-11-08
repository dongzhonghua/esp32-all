#include "rgb_led.h"

void Pixel::init() {
  FastLED.addLeds<WS2812, RGB_LED_PIN, GRB>(color_buffers, RGB_LED_NUM);
  FastLED.setBrightness(200);
}

Pixel& Pixel::setRGB(int id, int r, int g, int b) {
  color_buffers[id] = CRGB(r, g, b);
  FastLED.show();

  return *this;
}

Pixel& Pixel::setBrightness(float duty) {
  duty = constrain(duty, 0, 1);
  FastLED.setBrightness((uint8_t)(255 * duty));
  FastLED.show();

  return *this;
}

static uint32_t i = 0;
static uint32_t colors[7] = {CRGB::Red,   CRGB::Orange, CRGB::Yellow,
                             CRGB::Green, CRGB::Blue,   CRGB::Cyan,
                             CRGB::Purple};

Pixel& Pixel::setRainbow(int id, float duty) {
  color_buffers[id] = colors[i++ % 7];
  FastLED.setBrightness((uint8_t)(255 * duty));
  FastLED.show();
}
