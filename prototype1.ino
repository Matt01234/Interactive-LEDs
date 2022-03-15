int ledPinW = 3;
int ledPinG = 4;
int ledPinY = 5;
int ledPinB = 6;
int ledPinR = 9;
int switchPin = 12;
int x = 0;
int potPin = A0; 

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPinW, OUTPUT);
  pinMode(ledPinG, OUTPUT);
  pinMode(ledPinY, OUTPUT);
  pinMode(ledPinB, OUTPUT);
  pinMode(ledPinR, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  bool switchState = digitalRead(switchPin);
  int potVal = analogRead(potPin);
  int ledVal = map(potVal, 0, 1023, 0, 255);
  
  if(switchState == LOW){
    x++;
    if(x == 1){
      for(int i = 0; i < 20; i++){
        analogWrite(ledPinW, ledVal);
        potVal = analogRead(potPin);
        ledVal = map(potVal, 0, 1023, 0, 255);
        delay(100);
        analogWrite(ledPinW, 0);
        delay(100); 
      }
      delay(450);
      analogWrite(ledPinW, ledVal);
      delay(50);
      analogWrite(ledPinW, 0);
      delay(450);
      analogWrite(ledPinW, ledVal);
      delay(50);
      analogWrite(ledPinW, 0);
      delay(450);
      analogWrite(ledPinW, ledVal);
      delay(50);
      analogWrite(ledPinW, 0);
      delay(500);
      for(int i = 0; i < 20; i++){
        analogWrite(ledPinW, ledVal);
        potVal = analogRead(potPin);
        ledVal = map(potVal, 0, 1023, 0, 255);
        delay(100);
        analogWrite(ledPinW, 0);
        delay(100); 
      }
    }
    else if(x == 2){
       for(int i = 0; i < 2; i++){
        analogWrite(ledPinG, ledVal);
        potVal = analogRead(potPin);
        ledVal = map(potVal, 0, 1023, 0, 255);
        delay(500);
        analogWrite(ledPinG, 0);
        delay(500);
      }
      for(int i = 0; i < 3; i++){
        analogWrite(ledPinG, ledVal);
        potVal = analogRead(potPin);
        ledVal = map(potVal, 0, 1023, 0, 255);
        delay(400);
        analogWrite(ledPinG, 0);
        delay(400);
      }
      for(int i = 0; i < 4; i++){
        analogWrite(ledPinG, ledVal);
        potVal = analogRead(potPin);
        ledVal = map(potVal, 0, 1023, 0, 255);
        delay(300);
        analogWrite(ledPinG, 0);
        delay(300);
      }
      for(int i = 0; i < 5; i++){
        analogWrite(ledPinG, ledVal);
        potVal = analogRead(potPin);
        ledVal = map(potVal, 0, 1023, 0, 255);
        delay(200);
        analogWrite(ledPinG, 0);
        delay(200);
      }
      for(int i = 0; i < 6; i++){
        analogWrite(ledPinG, ledVal);
        potVal = analogRead(potPin);
        ledVal = map(potVal, 0, 1023, 0, 255);
        delay(100);
        analogWrite(ledPinG, 0);
        delay(100);
      }
      analogWrite(ledPinG, 0);  
    }
    else if(x == 3){
      for(int i = 0; i < 20; i++){
        analogWrite(ledPinY, ledVal);
        potVal = analogRead(potPin);
        ledVal = map(potVal, 0, 1023, 0, 255);
        delay(20);
        analogWrite(ledPinY, 0);
        delay(20);
      }
      for(int i = 0; i < 16; i++){
        analogWrite(ledPinY, ledVal);
        potVal = analogRead(potPin);
        ledVal = map(potVal, 0, 1023, 0, 255);
        delay(40);
        analogWrite(ledPinY, 0);
        delay(40);
      }
      for(int i = 0; i < 12; i++){
        analogWrite(ledPinY, ledVal);
        potVal = analogRead(potPin);
        ledVal = map(potVal, 0, 1023, 0, 255);
        delay(80);
        analogWrite(ledPinY, 0);
        delay(80);
      }
      for(int i = 0; i < 8; i++){
        analogWrite(ledPinY, ledVal);
        potVal = analogRead(potPin);
        ledVal = map(potVal, 0, 1023, 0, 255);
        delay(100);
        analogWrite(ledPinY, 0);
        delay(100);
      }
      for(int i = 0; i < 11; i++){
        analogWrite(ledPinY, ledVal);
        potVal = analogRead(potPin);
        ledVal = map(potVal, 0, 1023, 0, 255);
        delay(100);
        analogWrite(ledPinY, 0);
        delay(300);
      }
      analogWrite(ledPinY, 0); 
        
    }
    else if(x == 4){
      for(int i = 0; i < 10; i++){
        analogWrite(ledPinB, ledVal);
        potVal = analogRead(potPin);
        ledVal = map(potVal, 0, 1023, 0, 255);
        delay(50);
        analogWrite(ledPinB, 0);
        delay(450);
      }
      analogWrite(ledPinB, 0);  
      delay(500);
      analogWrite(ledPinB, ledVal);
      delay(200);
      analogWrite(ledPinB, 0);
      delay(100);
      analogWrite(ledPinB, ledVal);
      delay(500);
      analogWrite(ledPinB, 0);
      delay(700);

      for(int i = 0; i < 100; i++){
        analogWrite(ledPinB, ledVal);
        potVal = analogRead(potPin);
        ledVal = map(potVal, 0, 1023, 0, 255);
        delay(20);
        analogWrite(ledPinB, 0);
        delay(20);
      }
      
    }
    else if(x == 5){
      for(int i = 0; i < 5; i++){
        analogWrite(ledPinR, ledVal);
        potVal = analogRead(potPin);
        ledVal = map(potVal, 0, 1023, 0, 255);
        delay(200);
        analogWrite(ledPinR, 0);
        delay(200);
      }
      delay(500);
      for(int i = 0; i < 10; i++){
        analogWrite(ledPinR, ledVal);
        potVal = analogRead(potPin);
        ledVal = map(potVal, 0, 1023, 0, 255);
        delay(50);
        analogWrite(ledPinR, 0);
        delay(450);
      }
      delay(500);
      for(int i = 0; i < 5; i++){
        analogWrite(ledPinR, ledVal);
        potVal = analogRead(potPin);
        ledVal = map(potVal, 0, 1023, 0, 255);
        delay(200);
        analogWrite(ledPinR, 0);
        delay(200);
      }

      
      analogWrite(ledPinR, 0);
      x = 0;  
    }
  }
  else{
    analogWrite(ledPinW, ledVal);
    delay(100); 
    potVal = analogRead(potPin);
    ledVal = map(potVal, 0, 1023, 0, 255); 
    analogWrite(ledPinW, 0); 
    analogWrite(ledPinG, ledVal);
    delay(100);  
    potVal = analogRead(potPin);
    ledVal = map(potVal, 0, 1023, 0, 255);
    analogWrite(ledPinG, 0);
    analogWrite(ledPinY, ledVal);
    delay(100);
    potVal = analogRead(potPin);
        ledVal = map(potVal, 0, 1023, 0, 255);  
    analogWrite(ledPinY, 0);
    analogWrite(ledPinB, ledVal);
    delay(100);  
    potVal = analogRead(potPin);
        ledVal = map(potVal, 0, 1023, 0, 255);
    analogWrite(ledPinB, 0);
    analogWrite(ledPinR, ledVal);
    delay(100);  
    potVal = analogRead(potPin);
        ledVal = map(potVal, 0, 1023, 0, 255);
    analogWrite(ledPinR, 0);     
  }
}
