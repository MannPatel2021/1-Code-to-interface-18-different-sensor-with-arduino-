/*
-----FUNCTION FOR HALL SENSOR-----
*/

void HallEffectSensor(){
  int val = digitalRead(HallSensor);
  if(val == HIGH){
    Serial.print("Hall effect is active");
  }else {
    Serial.println("Hall effect is not active");
  }
}