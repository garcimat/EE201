/*
  Alternating Blink

  Turns an LED on for one second, then off for one second, repeatedly.
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
  
    //wait 1 sec
    delay(1000);

    //turn off pinA and turn on pinB
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);

    //wait 1 sec
    delay(1000);
}
