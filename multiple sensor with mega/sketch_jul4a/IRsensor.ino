/*
-----FUNCTION FOR IR SENSOR-----
*/

void IRsensor(){
  unsigned int sensorStatus = digitalRead(IRSensor);
  if (sensorStatus == 1) {
    Serial.println("Motion Detected!"); 
  }else{
    Serial.println("Motion Ended!"); 
  }
}