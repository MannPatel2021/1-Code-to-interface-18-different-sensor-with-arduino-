/*
-----FUNCTION FOR WATER LEVEL SENSOR-----
*/

void WaterLevel(){
  int waterValue = analogRead(WaterLevelSensor);
  if (waterValue > 570) {
    int outputValue = map(waterValue, 570, 800, 0, 255);
    Serial.print("Water Level : ");
    Serial.println(outputValue);
  }
  delay(1000);
}