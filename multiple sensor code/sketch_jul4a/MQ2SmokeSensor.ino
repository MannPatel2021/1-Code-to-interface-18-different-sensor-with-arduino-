/*
-----FUNCTION FOR MQ2 SMKODE DETECTION SENSOR-----
*/

void MQ2SmokeSensor(){
  float sensorvalue = analogRead(MQ2);
  Serial.print("MQ2 value : ");
  Serial.print(sensorvalue);
  if (sensorvalue > 200) {
    Serial.print(" | Smoke Detection!");
  }
  Serial.println(" ");
  delay(1000);
}