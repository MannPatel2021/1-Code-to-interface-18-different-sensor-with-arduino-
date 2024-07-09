/*
-----FUNCTION FOR DHT11 TEMPERATURE HUMIDITY SENSOR-----
*/

void DHTSensor(){
  sensors_event_t event;
  dht.temperature().getEvent(&event);
  Serial.print(F("Temperature: "));
  Serial.print(event.temperature);
  Serial.print(F("C"));
  dht.humidity().getEvent(&event);
  Serial.print(F("Humidity: "));
  Serial.print(event.relative_humidity);
  Serial.println(F("%"));
  delay(delayMS);
}