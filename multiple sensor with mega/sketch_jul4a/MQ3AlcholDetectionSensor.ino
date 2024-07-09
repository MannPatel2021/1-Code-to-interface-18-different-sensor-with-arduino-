/*
-----FUNCTION FOR MQ3 ALCHOL DETECTION SENSOR-----
*/

void MQ3AlcholDetectionSensor(){
  float sensorV = digitalRead(MQ3);
  Serial.print("MQ3 Value: ");
  Serial.print(sensorV);
  if (sensorV < 120) {
    Serial.println("  |  Status:Stone Cold Sober");
  } else if (sensorV >= 120 && sensorV < 400) {
    Serial.print("   | Status: Drinking but within legal limits");
  }else {
    Serial.print("   | Status : DRUNK ");
  }
  delay(1000);
}