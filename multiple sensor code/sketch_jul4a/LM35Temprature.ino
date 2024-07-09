/*
-----FUNCTION FOR LM35 TEMPERATURE SENSOR-----
*/

void LM35Temprature() {
  int temp_adc_val;
  float temp_val;
  temp_adc_val = analogRead(LM35_pin);// Read Temperature 
  temp_val = (temp_adc_val * 4.88);	// Convert adc value to equivalent voltage
  temp_val = (temp_val/10);	// LM35 gives output of 10mv/°C 
  Serial.print("Temperature = ");
  Serial.print(temp_val);
  Serial.print(" Degree Celsius\n");
  delay(1000);
}