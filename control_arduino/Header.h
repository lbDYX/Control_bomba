#ifndef HEADER_H
# define HEADER_H
  //Funtion header
//Check_Error :
  byte ft_Error_temperature_sensor (int temp);
  byte ft_Error_Outside_temperature_sensor (int out_temp);
  byte  ft_Error_humidity_sensor (int humi);
 //Cycles :
  void  declaration_pin (void);
  byte ft_Error_temperature_sensor (int temp);
  byte ft_Error_Outside_temperature_sensor (int out_temp);
  byte  ft_Error_humidity_sensor (int humi);
  void  ft_actuator_auto(bool btnA);

#endif
