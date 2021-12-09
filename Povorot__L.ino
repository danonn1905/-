long Z = 0;
long N = 0;
long NeoPix = 30;

#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel pixels_1 = Adafruit_NeoPixel(NeoPix, 2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_2 = Adafruit_NeoPixel(NeoPix, 3, NEO_GRB + NEO_KHZ800);

              /////////////////   L  //////////////
// povorot
void S1() {
  for (int count = 0; count < 3; count++) {
    for (int count = 0; count < NeoPix; count++) {
      Z = Z + 1;
      pixels_1.setBrightness(255);
       pixels_1.setPixelColor(Z-1, pixels_1.Color(255,255,0));
       pixels_1.show();
       delay(5);
    }
    delay(200);
    Z = 0;
    for (int count = 0; count < NeoPix; count++) {
      Z = Z + 1;
      pixels_1.setBrightness(255);
       pixels_1.setPixelColor(Z-1, pixels_1.Color(0,0,0));
       pixels_1.show();
       }
    Z = 0;
    delay(200);
  }
}

                      // beg stroka L
void S2() {
  Z = NeoPix + 1;
  for (int count = 0; count < NeoPix; count++) {
    for (int count = 0; count < NeoPix; count++) {
      Z = Z - 1;
      pixels_1.setBrightness(255);
       pixels_1.setPixelColor(Z-1, pixels_1.Color(0,0,153));
       pixels_1.show();
       delay(5);
      pixels_1.setBrightness(255);
       pixels_1.setPixelColor(Z-1, pixels_1.Color(0,0,0));
       pixels_1.show();
       }
    pixels_1.setBrightness(255);
     pixels_1.setPixelColor(Z-1, pixels_1.Color(0,0,153));
     pixels_1.show();
     Z = NeoPix + (Z + 1);
  }
  delay(100);
}

                       // beg tocka L
void S3() {
  Z = 0;
  for (int count = 0; count < NeoPix; count++) {
    Z = Z + 1;
    pixels_1.setBrightness(255);
     pixels_1.setPixelColor(Z-1, pixels_1.Color(255,255,255));
     pixels_1.show();
     delay(10);
    pixels_1.setBrightness(255);
     pixels_1.setPixelColor(Z-1, pixels_1.Color(51,51,51));
     pixels_1.show();
     }
  Z = NeoPix;
  for (int count = 0; count < NeoPix; count++) {
    Z = Z - 1;
    pixels_1.setBrightness(255);
     pixels_1.setPixelColor(Z-1, pixels_1.Color(255,255,255));
     pixels_1.show();
     delay(10);
    pixels_1.setBrightness(255);
     pixels_1.setPixelColor(Z-1, pixels_1.Color(51,51,51));
     pixels_1.show();
     }
}
                          // dxo L
void S4() {
  Z = 0;
  for (int count = 0; count < NeoPix; count++) {
    Z = Z + 1;
    pixels_1.setBrightness(255);
     pixels_1.setPixelColor(Z-1, pixels_1.Color(255,255,255));
     pixels_1.show();
     }
     ///vkl fara
  pinMode(12, OUTPUT);
   digitalWrite(12, 1);
}

                       // povorot knopka L 
void S5() {
  for (int count = 0; count < 3; count++) {
    for (int count = 0; count < NeoPix; count++) {
      Z = Z + 1;
      pixels_1.setBrightness(255);
       pixels_1.setPixelColor(Z-1, pixels_1.Color(255,255,0));
       pixels_1.show();
       delay(5);
    }
    delay(200);
    Z = 0;
    for (int count = 0; count < NeoPix; count++) {
      Z = Z + 1;
      pixels_1.setBrightness(255);
       pixels_1.setPixelColor(Z-1, pixels_1.Color(0,0,0));
       pixels_1.show();
       }
    Z = 0;
    delay(200);
  }
}
                // povorot knopka dxo L
void S6() {
  for (int count = 0; count < NeoPix; count++) {
    Z = Z + 1;
    pixels_1.setBrightness(255);
    pixels_1.setPixelColor(Z-1, pixels_1.Color(255,255,255));
    pixels_1.show();
     }
}
   ///////////////////////////
void setup() {
  pinMode(12, OUTPUT);
  digitalWrite(12, 0);

  pixels_1.begin();
  pixels_2.begin();
  
  pinMode(A0,INPUT_PULLUP);
  pinMode(A1,INPUT_PULLUP);
}

void loop() {
    if (N == 0) {
      S1();
      S2();
      S3();
      S4();
      N = 1;
    }
    if (analogRead(A0) == 0) ////// povorot knopka L
    {
      S5();
      S6();
    }
    
    if (analogRead(A1) == 0) ////// povorot knopka R
    {
      /// 
      ///
    }
    
  // povorot
  // beg stroka
  // beg tocka
  // povorot
  ///vkl fara
  // dxo
  // povorot knopka L
  // povorot knopka dxo L
}
