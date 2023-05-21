int incomingByte;
void setup() {
  Serial.begin(9600);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  if(Serial.available() > 0)
  {
    incomingByte = Serial.read();

    if(incomingByte == 'Q') {
      digitalWrite(1, HIGH);
    }
    if(incomingByte == 'W') {
      digitalWrite(1, LOW);
    }
    if(incomingByte == 'E') {
      digitalWrite(2, HIGH);
    }
    if(incomingByte == 'R') {
      digitalWrite(2, LOW);
    }
    if(incomingByte == 'T') {
      digitalWrite(3, HIGH);
    }
    if(incomingByte == 'Y') {
      digitalWrite(3, LOW);
    }
    if(incomingByte == 'U') {
      digitalWrite(4, HIGH);
    }
    if(incomingByte == 'I') {
      digitalWrite(4, LOW);
    }
    if(incomingByte == 'O') {
      digitalWrite(5, HIGH);
    }
    if(incomingByte == 'P') {
      digitalWrite(5, LOW);
    }
    if(incomingByte == 'A') {
      digitalWrite(6, HIGH);
    }
    if(incomingByte == 'S') {
      digitalWrite(6, LOW);
    }
    if(incomingByte == 'D') {
      digitalWrite(7, HIGH);
    }
    if(incomingByte == 'F') {
      digitalWrite(7, LOW);
    }if(incomingByte == 'G') {
      digitalWrite(8, HIGH);
    }
    if(incomingByte == 'H') {
      digitalWrite(8, LOW);
    }
    if(incomingByte == 'J') {
      digitalWrite(9, HIGH);
    }
    if(incomingByte == 'K') {
      digitalWrite(9, LOW);
    }
    if(incomingByte == 'L') {
      digitalWrite(10, HIGH);
    }
    if(incomingByte == 'Z') {
      digitalWrite(10, LOW);
    }
    if(incomingByte == 'X') {
      digitalWrite(11, HIGH);
    }
    if(incomingByte == 'C') {
      digitalWrite(11, LOW);
    }if(incomingByte == 'V') {
      digitalWrite(12, HIGH);
    }
    if(incomingByte == 'B') {
      digitalWrite(12, LOW);
    }
    if(incomingByte == 'N') {
      digitalWrite(13, HIGH);
    }
    if(incomingByte == 'M') {
      digitalWrite(13, LOW);
    }
  }
}
