#include <SPI.h>
#include <Adafruit_MCP3008.h>
Adafruit_MCP3008 adc;
#define NUM_SENSORS 8
int LastError;
int REF[NUM_SENSORS];
uint8_t F_PIN[NUM_SENSORS] = { 7, 6, 5, 4, 3, 2, 1, 0};
int F[NUM_SENSORS];

///////////////////////////////////////////////////////////////////////////
int MinValue[NUM_SENSORS] = {45, 46, 47, 47, 49, 45, 46, 53};
int MaxValue[NUM_SENSORS] = {780, 765, 820, 841, 849, 791, 800, 890};

///////////////////////////////////////////////////////////////////////////

void setup()
{
  Serial.begin(9600);
  analogReadResolution(10);
  for (int i = 2; i <= 8; i++) {
    pinMode(i, OUTPUT);
  }
  Beep(100);
  delay(100);
  Beep(100);


  swOK();
  delay(500);
  //SerialFCalibrate();
  //    SerialF();
  //      ShowCalibrate();
  /////1750//////
  TrackTime(205, 0.06, 0.5, 250);
  TrackTime(120, 0.06, 0.6, 600);
  TrackTime(255, 0.07, 0.6, 420);
  TrackTime(120, 0.06, 0.6 , 550);
  TrackTime(225, 0.06, 0.6, 400);
//  TrackTime(120, 0.06, 0.6, 400);
//  TrackTime(165, 0.06, 0.6, 50);
//  TrackCross(135, 0.06, 0.6, 'p');
//  TrackCross(165, 0.07, 0.6, 'p');
//  TrackCross(135, 0.07, 0.6, 'p');
//    TrackCross(145, 0.07, 0.6, 'p');
    


//    TrackTime(135, 0.06, 0.6, 800);
  //  TrackTime(255, 0.06, 0.6, 390);
  //  TrackTime(140, 0.06, 0.6, 720);
  //  TrackTime(180, 0.06, 0.6, 300);
  //  TrackTime(130, 0.06, 0.6, 350);
  //  TrackTime(255, 0.06, 0.6, 410);
  //  TrackTime(120, 0.06, 0.6, 2100);
//    TrackTime(185, 0.06, 0.6, 600);


  /////2500/////
  //  TrackTime(200, 0.06, 0.5, 50);
  //  TrackTime(255, 0.06, 0.5, 370);
  //  TrackTime(60, 0.09, 0.9, 800);
  //  TrackTime(120, 0.06, 0.5, 600);
  //  TrackTime(90, 0.13, 0.5, 780);
  //  TrackTime(140, 0.06, 0.9, 1100);
  //  TrackTime(255, 0.06, 0.5, 150);
  //  TrackCross(60, 0.15, 0.5, 'p');
  //  TrackCross(90, 0.15, 0.6, 'p');
  //  TrackTime(255, 0.06, 0.5, 150);
  //  TrackTime(60, 0.15, 0.6, 800);
  //  TrackTime(255, 0.06, 0.5, 280);
  //  TrackTime(130, 0.8, 0.5, 1500);









  //  TrackTime(255, 0.06, 0.5, 70);
  //  TrackTime(200, 0.1, 0.5, 1450);
  //  TrackTime(255, 0.05, 0.5, 220);
  //  TrackTime(130, 0.07, 0.5, 750);
  //  TrackTime(255, 0.05, 0.5, 450);
  //  TrackTime(130, 0.07, 0.5, 750);
  //  TrackTime(255, 0.05, 0.5, 550);
  //  TrackTime(130, 0.07, 0.5, 1600);
  //  TrackTime(255, 0.05, 0.5, 250);
  //  TrackTime(130, 0.05, 0.5, 2700);
  //  TrackTime(255, 0.05, 0.5, 200);

  //  TrackTime(80, 0.05, 0.5, 2000);




  //  TrackTime(130, 0.06, 0.5, 600);
  //  TrackTime(255, 0.05, 0.5, 700);



  //  TrackTime(160, 0.1, 0.5, 450);
  //  TrackTime(255, 0.06, 0.5, 170);
  //  TrackTime(200, 0.07, 0.5, 400);
  //  TrackTime(240, 0.06, 0.5, 600);
  //  TrackTime(255, 0.05, 0.5, 800);

  //      Motor(-100, 100); delay(500);
  //      Motor(100, -100); delay(500);

}
void loop() {
       TrackTime(135, 0.06, 0.6, 300);
//    MotorStop();
}
