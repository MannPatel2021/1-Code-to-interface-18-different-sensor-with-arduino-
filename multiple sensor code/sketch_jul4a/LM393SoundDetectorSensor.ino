/*
-----FUNCTION FOR KM393 SOUND DETECTION SENSOR-----
*/

void SoundDetector(){
  unsigned long lastSound = 0;
  int soundData = digitalRead(SoundSensor);
  if (soundData == LOW){
    if (millis() - lastSound > 25){
      Serial.println("Clap Detected!!! ");
    }
    lastSound = millis();
  }
}