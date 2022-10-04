#include "header.h"
//Cycles program
const byte act1 = 2;
void  declaration_pin (void)
{
  pinMode (act1,OUTPUT);
}
//hr = hour, mn = minute, sg = second
// time On/Off of hours
byte  ft_hour (byte hr)
{
  if((hr >= 6 && hr <= 19) ||(hr == 20) ||(hr == 22) ||(hr == 24) ||(hr == 2) ||(hr == 4))
    return (1);
  else
    return (0);
}
// time On/Off of minutes
byte  ft_minute (byte mn)
{
  if((mn >= 0 && mn <= 9) || (mn >= 30 && mn <= 39))
    return (1);
  else
    return (0);
}
void  ft_cycles(byte hr, byte mn)
{
  if((ft_hour (hr)) && ft_minute (mn))
    digitalWrite(act1,LOW);
   else
    digitalWrite(act1,HIGH);
}
void  ft_actuator_auto(bool btnA)
{
  if (btnA == 1)
    ft_cycles(hr,mn);
}
