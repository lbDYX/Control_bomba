#include "header.h"
//Inside temperature sensor
byte ft_Error_temperature_sensor (int temp)
{
  if (temp >= -20 && temp <= 50)
    return (1);
  else
    return (0);
}
//Outside temperature sensor
byte ft_Error_Outside_temperature_sensor (int out_temp)
{
  if (temp >= -20 && temp <= 50)
    return (1);
  else
    return (0);
}
byte  ft_Error_humidity_sensor (int humi)
{
  if (humi >= 0 && humi <= 100)
    return (1);
  else
    return (0);
}
