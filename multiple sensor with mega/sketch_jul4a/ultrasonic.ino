/*
-----FUNCTION FOR HC SR-04 ULTRAASONIC SENSOR-----
*/

void Ultrasonic() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034/2;
  Serial.print("Distance: ");
  Serial.println(distance);
}