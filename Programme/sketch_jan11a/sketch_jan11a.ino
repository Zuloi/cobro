#include <CoDrone.h>

byte modeTime = 7;                        // How long each pattern takes
int delayTime = 1000;                     // How long to wait before changing light patterns

byte color0[] = {255, 0, 0};              //color0 (R,G,B), red
byte color1[] = {0, 255, 0};              //color1 (R,G,B), green
byte color2[] = {0, 0, 255};              //color2 (R,G,B), blue
byte color3[] = {0, 0, 0};                //color3 (R,G,B), black
byte color4[] = {14, 214, 101};           //color4 (R,G,B), light green
byte color5[] = {232, 58, 153};           //color5 (R,G,B), pink
byte color6[] = {226, 189, 52};           //color6 (R,G,B), orange
byte color7[] = {52, 226, 214};           //color7 (R,G,B), türkis
byte color8[] = {255, 255, 0};            //color8 (R,G,B), yellow
byte color9[] = {255, 255, 255};          //color9 (R,G,B), white

void setup() {
   CoDrone.begin(115200); // sets up the connection to the drone using the bluetooth module at 115200bps (bits per second)

  CoDrone.AutoConnect(NearbyDrone);     // finds and connects to a drone that is nearby
}

void loop() {
  CoDrone.LedColor(ArmDimming, color0, modeTime);   // set leds to color0, dimming for modeTime time
  delay(delayTime);                                 // wait delayTime (1000)

  CoDrone.LedColor(EyeDimming, color0, modeTime);   // set leds to color0, dimming for modeTime time
  delay(delayTime);                                 // wait delayTime (1000)


  CoDrone.LedColor(ArmDimming, color1, modeTime);   // set leds to color1, dimming for modeTime time
  delay(delayTime);                                 // wait delayTime (1000)
  
  CoDrone.LedColor(EyeDimming, color1, modeTime);   // set leds to color1, dimming for modeTime time
  delay(delayTime);                                 // wait delayTime (1000)


  CoDrone.LedColor(ArmDimming, color2, modeTime);   // set leds to color2, dimming for modeTime time
  delay(delayTime);                                 // wait delayTime (1000)
  
  CoDrone.LedColor(EyeDimming, color2, modeTime);   // set leds to color2, dimming for modeTime time
  delay(delayTime);                                 // wait delayTime (1000)


  CoDrone.LedColor(ArmDimming, color3, modeTime);   // set leds to color3, dimming for modeTime time
  delay(delayTime);                                 // wait delayTime (1000)

  CoDrone.LedColor(EyeDimming, color3, modeTime);   // set leds to color3, dimming for modeTime time
  delay(delayTime);                                 // wait delayTime (1000)


  CoDrone.LedColor(ArmDimming, color4, modeTime);   // set leds to color4, dimming for modeTime time
  delay(delayTime);                                 // wait delayTime (1000)

  CoDrone.LedColor(EyeDimming, color4, modeTime);   // set leds to color4, dimming for modeTime time
  delay(delayTime);                                 // wait delayTime (1000)


  CoDrone.LedColor(ArmDimming, color5, modeTime);   // set leds to color5, dimming for modeTime time
  delay(delayTime);                                 // wait delayTime (1000)

  CoDrone.LedColor(EyeDimming, color5, modeTime);   // set leds to color5, dimming for modeTime time
  delay(delayTime);                                 // wait delayTime (1000)


  CoDrone.LedColor(ArmDimming, color6, modeTime);   // set leds to color6, dimming for modeTime time
  delay(delayTime);                                 // wait delayTime (1000)

  CoDrone.LedColor(EyeDimming, color6, modeTime);   // set leds to color6, dimming for modeTime time
  delay(delayTime);                                 // wait delayTime (1000)


  CoDrone.LedColor(ArmDimming, color7, modeTime);   // set leds to color7, dimming for modeTime time
  delay(delayTime);                                 // wait delayTime (1000)

  CoDrone.LedColor(EyeDimming, color7, modeTime);   // set leds to color7, dimming for modeTime time
  delay(delayTime);                                 // wait delayTime (1000)


  CoDrone.LedColor(ArmDimming, color8, modeTime);   // set leds to color8, dimming for modeTime time
  delay(delayTime);                                 // wait delayTime (1000)

  CoDrone.LedColor(EyeDimming, color8, modeTime);   // set leds to color8, dimming for modeTime time
  delay(delayTime);                                 // wait delayTime (1000)


  CoDrone.LedColor(ArmDimming, color9, modeTime);   // set leds to color9, dimming for modeTime time
  delay(delayTime);                                 // wait delayTime (1000)

  CoDrone.LedColor(EyeDimming, color9, modeTime);   // set leds to color9, dimming for modeTime time
  delay(delayTime);                                 // wait delayTime (1000)
}
