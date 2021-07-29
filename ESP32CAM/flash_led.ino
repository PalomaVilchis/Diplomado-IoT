
//LED BUILT_IN is GPIO 4 
void setup() {
  pinMode(4, OUTPUT); // Set the pin as output
}

// Remember that the pin work with inverted logic
// LOW to Turn on and HIGH to turn off
void loop() {
  digitalWrite(4, LOW); //Turn on
  delay (1000); //Wait 1 sec
  digitalWrite(4, HIGH); //Turn off
  delay (1000); //Wait 1 sec
}
