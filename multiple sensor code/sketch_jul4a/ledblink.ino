/*
-----FUNCTION FOR LEDBLINK-----
*/

void ledBlink(){
  digitalWrite(ledpin, HIGH);
  Serial.print("Led ON");
  delay(1000);
  digitalWrite(ledpin, LOW);
  Serial.print("Led OFF");
  delay(1000);
}
