/*
-----FUNCTION FOR HMC5883L MAGNETOMETER SENSOR-----
*/

void HMC5883LMagnoetmeter()
{
   float heading = Compass.GetHeadingDegrees();
   Serial.print("Heading: \t");
   Serial.println( heading );   
   delay(1000);
}