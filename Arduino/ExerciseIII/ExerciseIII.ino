void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); 
pinMode(13, INPUT); // Sets pin 13 as an input 

digitalRead(13); // Reads the status of pin 13 as High or Low

if (digitalRead(13) == HIGH){     // Conditional to check if pin is High or Low and print appropriate statement
  Serial.println("Hello World!");
}
else {
  Serial.println("It's 2023");
}
}

void loop() {

}
