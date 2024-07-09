/*
-----FUNCTION FOR SOIL MOISTURE SENSOR-----
*/

void soilMoisture(){
  float moisture_percentage;
  int sensor_analog;
  sensor_analog = analogRead(SoilMoisture);
  moisture_percentage = (100 - ((sensor_analog/1023.00)* 100));
  Serial.print("Moisture Perecentage = ");
  Serial.print(moisture_percentage);
  Serial.print("%\n\n");
  delay(1000);
}