
 /*
 * This is the Arduino code for Light module for Arduino (basic)
This video shows you how to turn an AC light ON during the night using Light sensor 
and turn it OFF during the day. This code is basic version where 
digital output of the module is used.
 // Written for Robojax.com video 

 * watch HC-SR505 Motion Sensor video for details https://youtu.be/qhThpxiXubI
 * Code is available at http://robojax.com/learn/arduino

 * 
 // Writeen by Ahmad S. for Robojax.com on 
// on Freb 10, 2018 at 13:43 at city of Ajax, Ontario, Canada
*/
#define LIGHT 2 // define pint 2 for sensor
#define RELAY 9 // define pin 9 as for relay

/*
 * Permission granted to share this code given that this
 * note is kept with the code.
 * Disclaimer: this code is "AS IS" and for educational purpose only.
 * 
 */

void setup() {
  // Light LDR Sensor Code by Robojax.com 20180210
  Serial.begin(9600);// setup Serial Monitor to display information
  pinMode(LIGHT, INPUT_PULLUP);// define pin as Input  sensor
  pinMode(RELAY, OUTPUT);// define pin as OUTPUT for relay
}

void loop() {
  // Light LDR Sensor Code by Robojax.com 20180210
  int L =digitalRead(LIGHT);// read the sensor 
  
      if(L == 0){
    Serial.println(" light is ON");
    digitalWrite(RELAY,LOW);// turn the relay ON
  }else{

     Serial.println("  === light is OFF");
     digitalWrite(RELAY,HIGH);// turn the relay OFF
  }
  delay(500);
 // Light LDR Sensor Code by Robojax.com 20180210
}
 
