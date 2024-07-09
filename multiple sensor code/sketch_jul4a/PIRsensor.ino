/*
-----FUNCTION FOR PIR SENSOR-----
*/

void PIRsensor(){
  int pirState = digitalRead(PIRSensor);
  if (pirState == HIGH) {
    Serial.print("Motion Detected");
    delay(1000);
  }else {
  Serial.println("No Motion Detected");
  }
}