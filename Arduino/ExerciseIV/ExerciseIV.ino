void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

for (int i=9; i >= 0; i--){
  if(i == 9){
    digitalWrite(2,LOW); // Center
    digitalWrite(3,LOW); // Top Left
    digitalWrite(4,LOW); // Top
    digitalWrite(5,LOW); // Top Right
    digitalWrite(6,HIGH); //Bottom Left
    digitalWrite(7,LOW); // Bottom
    digitalWrite(8,LOW); // Bottom Right
    digitalWrite(9,HIGH); // Dot
    delay(1500);
  }

  if(i == 8){
    digitalWrite(2,LOW); // Center
    digitalWrite(3,LOW); // Top Left
    digitalWrite(4,LOW); // Top
    digitalWrite(5,LOW); // Top Right
    digitalWrite(6,LOW); //Bottom Left
    digitalWrite(7,LOW); // Bottom
    digitalWrite(8,LOW); // Bottom Right
    digitalWrite(9,HIGH); // Dot
    delay(1500);
  }

  if(i == 7){
    digitalWrite(2,HIGH); // Center
    digitalWrite(3,HIGH); // Top Left
    digitalWrite(4,LOW); // Top
    digitalWrite(5,LOW); // Top Right
    digitalWrite(6,HIGH); //Bottom Left
    digitalWrite(7,HIGH); // Bottom
    digitalWrite(8,LOW); // Bottom Right
    digitalWrite(9,HIGH); // Dot
    delay(1500);
  }

  if(i == 6){
    digitalWrite(2,LOW); // Center
    digitalWrite(3,LOW); // Top Left
    digitalWrite(4,LOW); // Top
    digitalWrite(5,HIGH); // Top Right
    digitalWrite(6,LOW); //Bottom Left
    digitalWrite(7,LOW); // Bottom
    digitalWrite(8,LOW); // Bottom Right
    digitalWrite(9,HIGH); // Dot
    delay(1500);
  }

  if(i == 5){
    digitalWrite(2,LOW); // Center
    digitalWrite(3,LOW); // Top Left
    digitalWrite(4,LOW); // Top
    digitalWrite(5,HIGH); // Top Right
    digitalWrite(6,HIGH); //Bottom Left
    digitalWrite(7,LOW); // Bottom
    digitalWrite(8,LOW); // Bottom Right
    digitalWrite(9,HIGH); // Dot
    delay(1500);
  }

  if(i == 4){
    digitalWrite(2,LOW); // Center
    digitalWrite(3,LOW); // Top Left
    digitalWrite(4,HIGH); // Top
    digitalWrite(5,LOW); // Top Right
    digitalWrite(6,HIGH); //Bottom Left
    digitalWrite(7,HIGH); // Bottom
    digitalWrite(8,LOW); // Bottom Right
    digitalWrite(9,HIGH); // Dot
    delay(1500);
  }

  if(i == 3){
    digitalWrite(2,LOW); // Center
    digitalWrite(3,HIGH); // Top Left
    digitalWrite(4,LOW); // Top
    digitalWrite(5,LOW); // Top Right
    digitalWrite(6,HIGH); //Bottom Left
    digitalWrite(7,LOW); // Bottom
    digitalWrite(8,LOW); // Bottom Right
    digitalWrite(9,HIGH); // Dot
    delay(1500);
  }

  if(i == 2){
    digitalWrite(2,LOW); // Center
    digitalWrite(3,HIGH); // Top Left
    digitalWrite(4,LOW); // Top
    digitalWrite(5,LOW); // Top Right
    digitalWrite(6,LOW); //Bottom Left
    digitalWrite(7,LOW); // Bottom
    digitalWrite(8,HIGH); // Bottom Right
    digitalWrite(9,HIGH); // Dot
    delay(1500);
  }

  if(i == 1){
    digitalWrite(2,HIGH); // Center
    digitalWrite(3,HIGH); // Top Left
    digitalWrite(4,HIGH); // Top
    digitalWrite(5,LOW); // Top Right
    digitalWrite(6,HIGH); //Bottom Left
    digitalWrite(7,HIGH); // Bottom
    digitalWrite(8,LOW); // Bottom Right
    digitalWrite(9,HIGH); // Dot
    delay(1500);
  }
  if(i == 0){
    digitalWrite(2,HIGH); // Center
    digitalWrite(3,LOW); // Top Left
    digitalWrite(4,LOW); // Top
    digitalWrite(5,LOW); // Top Right
    digitalWrite(6,LOW); //Bottom Left
    digitalWrite(7,LOW); // Bottom
    digitalWrite(8,LOW); // Bottom Right
    digitalWrite(9,HIGH); // Dot
    delay(1500);
  }
}
}
