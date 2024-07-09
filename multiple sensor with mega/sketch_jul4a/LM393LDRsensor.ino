/*
-----FUNCTION FOR LM393 LDR SENSOR SENSOR-----
*/
void LM383LDRSensor(){
  unsigned int SensorValue1 = analogRead(LDR);
  Serial.print("LDR Sensor : ");
  Serial.println(SensorValue1);
  delay(1000);
}