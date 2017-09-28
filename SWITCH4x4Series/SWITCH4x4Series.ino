//Interface of the Python program to the quad switch via the arduino
int incomingByte = 0;
String incomingWord = "";

void setup() {
  Serial.begin(9600);
  pinMode(38, OUTPUT);
  pinMode(39, OUTPUT);
  pinMode(40, OUTPUT);
  pinMode(41, OUTPUT);
  pinMode(42, OUTPUT);
  pinMode(43, OUTPUT);
  pinMode(44, OUTPUT);
  pinMode(45, OUTPUT);
  pinMode(46, OUTPUT);
  pinMode(47, OUTPUT);
  pinMode(48, OUTPUT);
  pinMode(49, OUTPUT);
  pinMode(50, OUTPUT);
  pinMode(51, OUTPUT);
  pinMode(52, OUTPUT);
  pinMode(53, OUTPUT);
  digitalWrite(38, LOW);
  digitalWrite(39, LOW);
  digitalWrite(40, LOW);
  digitalWrite(41, LOW);
  digitalWrite(42, LOW);
  digitalWrite(43, LOW);
  digitalWrite(44, LOW);
  digitalWrite(45, LOW);
  digitalWrite(46, LOW);
  digitalWrite(47, LOW);
  digitalWrite(48, LOW);
  digitalWrite(49, LOW);
  digitalWrite(50, LOW);
  digitalWrite(51, LOW);
  digitalWrite(52, LOW);
  digitalWrite(53, LOW);
  digitalWrite(6, LOW);
}

// the loop function runs over and over again forever
void loop() {
  if (Serial.available() > 0) {
    
    incomingByte = Serial.read();
    incomingWord += char(incomingByte);
    Serial.println(incomingWord);
  } 
  if(incomingWord == "Z"){
    digitalWrite(38, LOW);
    digitalWrite(39, LOW);
    digitalWrite(40, LOW);
    digitalWrite(41, LOW);
    digitalWrite(42, LOW);
    digitalWrite(43, LOW);
    digitalWrite(44, LOW);
    digitalWrite(45, LOW);
    digitalWrite(46, LOW);
    digitalWrite(47, LOW);
    digitalWrite(48, LOW);
    digitalWrite(49, LOW);
    digitalWrite(50, LOW);
    digitalWrite(51, LOW);
    digitalWrite(52, LOW);
    digitalWrite(53, LOW);
    incomingWord = "";
  }
    
  if(incomingWord == "A0"){
      digitalWrite(38, HIGH);
      incomingWord = "";
  } else if(incomingWord == "A1"){
      digitalWrite(39, HIGH);
      incomingWord = "";
  } else if(incomingWord == "A2"){
      digitalWrite(40, HIGH);
      incomingWord = "";
  } else if(incomingWord == "A3"){
      digitalWrite(41, HIGH);
      incomingWord = "";
  } else if(incomingWord == "B0"){
      digitalWrite(42, HIGH);
      incomingWord = "";
  } else if(incomingWord == "B1"){
      digitalWrite(43, HIGH);
      incomingWord = "";
  } else if(incomingWord == "B2"){
      digitalWrite(44, HIGH);
      incomingWord = "";
  } else if(incomingWord == "B3"){
      digitalWrite(45, HIGH);
      incomingWord = "";
  } else if(incomingWord == "C0"){
      digitalWrite(46, HIGH);
      incomingWord = "";
  } else if(incomingWord == "C1"){
      digitalWrite(47, HIGH);
      incomingWord = "";
  } else if(incomingWord == "C2"){
      digitalWrite(48, HIGH);
      incomingWord = "";
  } else if(incomingWord == "C3"){
      digitalWrite(49, HIGH);
      incomingWord = "";
  } else if(incomingWord == "D0"){
      digitalWrite(50, HIGH);
      incomingWord = "";
  } else if(incomingWord == "D1"){
      digitalWrite(51, HIGH);
      incomingWord = "";
  } else if(incomingWord == "D2"){
      digitalWrite(52, HIGH);
      incomingWord = "";
  } else if(incomingWord == "D3"){
      digitalWrite(53, HIGH);
      incomingWord = "";
  } 
}
