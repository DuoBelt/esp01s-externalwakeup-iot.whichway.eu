/*
 * ESP01s 
 * Deep sleep mode example

 */
 
void setup() {
  Serial.begin(115200);
  Serial.setTimeout(2000);

  // Wait for serial to initialize.
  while(!Serial) { }
  
  // Deep sleep mode for 30 seconds, the ESP01s wakes up by itself when GPIO XX  is connected to the RESET pin

  //ESP.deepSleep(30e6); 
  

  Serial.println(" Hello Morning");
  ESP.deepSleep(0); 
}

void loop() {
}