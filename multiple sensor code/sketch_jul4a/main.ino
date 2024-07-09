



// Author: Mann Patel 

//---->IMPORTANT NOT TO RUN THE CODE<--------
//Change the pin as per the connection/requirement.
//Download the library for the library manager and given link.
//Uncomment the Sensor Function in void loop section 


/*
---TYPES OF SENSOR YOU CAN INTERFACE WITH ARDUINO UNO AND MEGA WITH THIS CODE---
1. Led Blink 
2. HC-SR04 Ultrasonic Sensor
3. IR Sensor 
4. PIR Sensor
5. MPU6050 Gyro and Acceleration Sensor 
6. LM35 Temperature Sensor
7. HMC5883L Magnetometer Sensor
8. DHT11 Temperature and Humidity Sensor 
9. Soil Moisture Sensor 
10. BMP180 Barometer Sensor
11. MQ135 Air Quality Sensor
12. MQ2 Smoke Detection Sensor
13. MQ3 Alchol Detection Sensor
14. LM393 LDR Sensor
15. LM393 Sound Detection Sensor
16. Flame Detection Sensor
17. Water Level Sensor
18. Hall Sensor
*/

#include <Arduino.h> 
#include <Wire.h>             //Download library from Library Manager
#include <MPU6050_tockn.h>    //Download library from Library Manager
#include <HMC5883L_Simple.h>  //Download library from link: https://www.electronicwings.com/arduino/magnetometer-hmc5883l-interfacing-with-arduino-uno
#include <Adafruit_Sensor.h>  //Download library from Library Manager
#include <DHT.h>              //Download library from Library Manager
#include <DHT_U.h>            //Download library from Library Manager
#include <Adafruit_BMP085.h>  //Download library from Library Manager
#include <Adafruit_VL53L0X.h> //Download library from Library Manager

MPU6050 mpu6050(Wire);    //Connect SCL=A5 SDA=A4
HMC5883L_Simple Compass;  //Connect SCL=A5 SDA=A4
Adafruit_BMP085 bmp;      //Connect SCL=A5 SDA=A4


/*
-----CHANGE THE PIN NUMBER OR I/O PIN AS PER THE CONNECTION / REQUIREMENT-----
*/
#define ledpin 13       //Led Pin for led blink
#define trigPin  11     //Trigger Pin 
#define echoPin  12     //Echo Pin
#define IRSensor 10     //IRSensor Pin 
#define PIRSensor 9     //PIR Sensor Pin
#define LM35_pin A1     //LM35 temperature sensor
#define DHTTYPE DHT11   //DHT11 Temperature humidity sensor Type
#define DHTPIN 8        //DHT11 Temperature humidity PIN
#define SoilMoisture A2 //Soil Moisture Sensor PIN
#define MQ135 A2        //MQ135 Air quality sensor
#define MQ2 A1          //MQ2 Smoke Sensor
#define MQ3 A1          //MQ3 Alchol detection Sensor
#define LDR A1          //LM393 LDR sensor
#define SoundSensor 7   //LM393 Sound detector sensor
#define FlameSensor 6   //SeedStudio Flame sensor
#define WaterLevelSensor A1 //Water Level Sensor
#define HallSensor 4    //A3144 Hall effect sensor 
 

long timer = 0;
DHT_Unified dht(DHTPIN,DHTTYPE);
uint32_t delayMS;


void setup() {
  Serial.begin(9600);         //Begin the Serial communication
  pinMode(ledpin, OUTPUT);    //Set the ledpin as an Output 
  pinMode(trigPin, OUTPUT);   //Set the trigPin as an Output
  pinMode(echoPin, INPUT);    //Set the echoPin as an Input
  pinMode(IRsensor, INPUT);   //Set the IR data pin as an Input
  pinMode(PIRSensor, INPUT);  //Set the PIR data pin as Input
  pinMode(MQ135, INPUT);      //Set the MQ135 pin as Input
  pinMode(MQ2, INPUT);        //Set the MQ2 pin as Input
  pinMode(MQ3, INPUT);        //Set the MQ3 pin as Input
  pinMode(LDR, INPUT);        //Set the LDR pin as Input
  pinMode(SoundSensor, INPUT); //Set the Sound sensor pin as Input
  pinMode(FlameSensor, INPUT); // Set the flame sensor pin as Input
  pinMode(WaterLevelSensor, INPUT); //Set the Water Level Sensor pin as Input
  pinMode(HallSensor, INPUT); //Set the Hall Effect Sensor pin as Input
  
  
  Wire.begin();         //Begin the wire library 
  mpu6050.begin();      //Begin the MPU6050 library
  mpu6050.calcGyroOffsets(true);

  Compass.SetDeclination(-0, 23, 'W'); 
  Compass.SetSamplingMode(COMPASS_SINGLE);
  Compass.SetScale(COMPASS_SCALE_130);
  Compass.SetOrientation(COMPASS_HORIZONTAL_X_NORTH);
  
  
  dht.begin(); //Begin the DHT temp/humidity sensor library
  sensor_t sensor;
  delayMS = sensor.min_delay / 1000;

  bmp.begin(); //Begin the BMP Barometer sensor Library 

}
/*
----------PLEASE UNCOMMENT THE SENSOR WHICH YOU ARE USING WITH ARDUINO----------
*/
void loop() {
  //ledBlink();              //Uncomment to use Led blink code
  //Ultrasonic();            //Uncomment to use HC-SR04 Ultrasonic sensor code
  //IRsensor();              //Uncomment to use IR sensor code
  //PIRsensor();             //Uncomment to use PIR sensor code
  //Mpu6050();               //Uncomment to use MPU6050 sensor code 
  //LM35Temprature();        //Uncomment to use LM35 Temperature code 
  //HMC5883LMagnoetmeter(); //Uncomment to use HMC5883L Magnoetmeter sensor code
  //DHTSensor();             //Uncomment to use DHT11 sensor code
  //soilMoisture();          //Uncomment to use Soil moisture sensor code
  //BMP180Barometer();       //Uncomment to use BMP180 Barometer sensor code
  //MQ135AirQualitySensor(); //Uncomment to use MQ135 Air Quality sensor code
  //MQ2SmokeSensor();        //Uncomment to use MQ2 Smoke Detection sensor code
  //MQ3AlcholDetectionSensor();//Uncomment to use MQ3Alchol Detection sensorcode
  //LM383LDRSensor();        //Uncomment to use LM393 LDR sensor code
  //SoundDetector();         //Uncomment to use LM393Sound detection sensor code
  //flameSensor();           //Uncomment to use SeedStudio Flame sensor code
  //WaterLevel();            //Uncomment to use Water level sensor code
  //HallEffectSensor();      //Uncomment to use Hall effect sensor code

}






