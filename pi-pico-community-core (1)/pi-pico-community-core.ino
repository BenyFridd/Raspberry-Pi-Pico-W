#define RED 1
#define YELLOW 5
#define GREEN 9
#define BUTTON 15

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP); 
}

void loop() {
  if (digitalRead(BUTTON) == LOW) {  
    quickChange();  
  } else {
    normalOperation();  
  }
}

void normalOperation() {
  digitalWrite(GREEN, HIGH);
  delay(3000);

  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(500);

  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
  delay(2000);

  digitalWrite(YELLOW, HIGH);
  delay(500);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);
}

void quickChange() {
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(1000); 

  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
  delay(7000);  

  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);  
  delay(2000); 
}
