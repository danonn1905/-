#include <Adafruit_NeoPixel.h>
long Z = 0;
long N = 0;
long NeoPix = 30;
long NeoPix2 = 30;

Adafruit_NeoPixel pixels_1 = Adafruit_NeoPixel(20, 2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels_2 = Adafruit_NeoPixel(20, 3, NEO_GRB + NEO_KHZ800);


                       // povorot L
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
  delay(300);
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
  pinMode(12, OUTPUT);
   digitalWrite(12, 1);
}

                      // povorot ot knopki R
void S5() {
  for (int count = 0; count < 5; count++) {
    for (int count = 0; count < NeoPix; count++) {
      Z = Z + 1;
      pixels_1.setBrightness(255);
       pixels_1.setPixelColor(Z-1, pixels_1.Color(255,255,0));
       pixels_1.show();
       delay(5);
    }
   
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
  Z = 0;
  for (int count = 0; count < NeoPix; count++) {
    Z = Z + 1;
    pixels_1.setBrightness(255);
     pixels_1.setPixelColor(Z-1, pixels_1.Color(255,255,255));
     pixels_1.show();
     }
}
                 // povorot R
void C1() {
  for (int count = 0; count < 3; count++) {
    for (int count = 0; count < NeoPix; count++) {
      Z = Z + 1;
      pixels_2.setBrightness(255);
       pixels_2.setPixelColor(Z-1, pixels_2.Color(255,255,0));
       pixels_2 .show();
       delay(5);
    }
    delay(200);
    Z = 0;
    for (int count = 0; count < NeoPix; count++) {
      Z = Z + 1;
      pixels_2.setBrightness(255);
       pixels_2.setPixelColor(Z-1, pixels_2.Color(0,0,0));
       pixels_2.show();
       }
    Z = 0;
    delay(200);
  }
  }
                     // beg stroka R
void C2() {
  Z = NeoPix + 1;
  for (int count = 0; count < NeoPix; count++) {
    for (int count = 0; count < NeoPix; count++) {
      Z = Z - 1;
      pixels_2.setBrightness(255);
       pixels_2.setPixelColor(Z-1, pixels_2.Color(0,0,153));
       pixels_2.show();
       delay(5);
      pixels_2.setBrightness(255);
       pixels_2.setPixelColor(Z-1, pixels_2.Color(0,0,0));
       pixels_2.show();
       }
    pixels_2.setBrightness(255);
     pixels_2.setPixelColor(Z-1, pixels_2.Color(0,0,153));
     pixels_2.show();
     Z = NeoPix + (Z + 1);
  }
  delay(1000);
}

                             // beg tocka R
void C3() {
  Z = 0;
  for (int count = 0; count < NeoPix; count++) {
    Z = Z + 1;
    pixels_2.setBrightness(255);
     pixels_2.setPixelColor(Z-1, pixels_2.Color(255,255,255));
     pixels_2.show();
     delay(10);
    pixels_2.setBrightness(255);
     pixels_2.setPixelColor(Z-1, pixels_2.Color(51,51,51));
     pixels_2.show();
     }
  Z = NeoPix;
  for (int count = 0; count < NeoPix; count++) {
    Z = Z - 1;
    pixels_2.setBrightness(255);
     pixels_2.setPixelColor(Z-1, pixels_2.Color(255,255,255));
     pixels_2.show();
     delay(10);
    pixels_2.setBrightness(255);
     pixels_2.setPixelColor(Z-1, pixels_2.Color(51,51,51));
     pixels_2.show();
     }
}

                              // dxo R
void C4() {
  Z = 0;
  for (int count = 0; count < NeoPix; count++) {
    Z = Z + 1;
    pixels_2.setBrightness(255);
     pixels_2.setPixelColor(Z-1, pixels_2.Color(255,255,255));
     pixels_2.show();
     }
}
                      // povorot ot knopki R
void C5() {
  for (int count = 0; count < 5; count++) {
    for (int count = 0; count < NeoPix; count++) {
      Z = Z + 1;
      pixels_2.setBrightness(255);
       pixels_2.setPixelColor(Z-1, pixels_2.Color(255,255,0));
       pixels_2.show();
       delay(5);
    }
    delay(200);
    Z = 0;
    for (int count = 0; count < NeoPix; count++) {
      Z = Z + 1;
      pixels_2.setBrightness(255);
       pixels_2.setPixelColor(Z-1, pixels_2.Color(0,0,0));
       pixels_2.show();
       }
    Z = 0;
    delay(200);
  }

}
                // povorot knopka dxo R
void C6() {
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
     
      C1();
      C2();
      C3();
      C4();
      N = 1;
    }
    if (analogRead(A0) == 0) {
      S5();
      S4();
      N = 1;
    if (analogRead(A1) == 0) {
      C6();
      C5();
      N = 1;
     }
    }
}
