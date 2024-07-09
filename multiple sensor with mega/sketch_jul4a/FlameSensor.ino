/*
-----FUNCTION FOR FLAME SENSOR-----
*/

void flameSensor(){
  long flamedata = digitalRead(FlameSensor);
  if (digitalRead(FlameSensor)){
    Serial.print("Flame Detected");
  }else {
    Serial.println("Flame Not Detected");
  }
  delay(1000);
}