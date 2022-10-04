#include "header.h"
int temp;
int out_temp;
int humi;
//Variables RTC
byte  hr;
byte  mn;
byte  sg;
//Virtual button
bool  btnM;
bool  btnA;

void setup() 
{
  declaration_pin ();
}
void loop() 
{
  btnA = 1;
  ft_actuator_auto(btnA);
}
