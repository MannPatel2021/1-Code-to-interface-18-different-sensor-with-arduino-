/*
-----FUNCTION FOR BMP180 BAROMETER SENSOR-----
*/

void BMP180Barometer(){
  Serial.print("Temoerature = ");
  Serial.print(bmp.readTemperature());
  Serial.print("*C");

  Serial.print("pressure = ");
  Serial.print(bmp.readPressure());
  Serial.print("Pa");

  Serial.print("Altitude = ");
  Serial.print(bmp.readAltitude());
  Serial.print(" meters");

  Serial.print("Pressure at sealevel (calculated) = ");
  Serial.print(bmp.readSealevelPressure());
  Serial.print("Pa");

  Serial.print("Real altitude = ");
  Serial.print(bmp.readAltitude(101500));
  Serial.print(" meters");

  Serial.println();
  delay(500);
}