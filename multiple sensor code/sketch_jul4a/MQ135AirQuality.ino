/*
-----FUNCTION FOR MQ135 AIR QUALITY SENSOR-----
*/


void MQ135AirQualitySensor(){
  int sensordata = analogRead(MQ135);
  Serial.print("Air Quality: ");
  Serial.print(sensordata, DEC);
  Serial.print(" PPM");
  delay(100);
}