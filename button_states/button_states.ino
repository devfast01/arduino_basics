
// constants won't change. They're used here to set pin numbers:
const int button = 9;     // the number of the pushbutton pin
int val_button ;
int counter = 0;

// variables will change:
        // variable for reading the pushbutton status

void setup() {
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop() {
  val_button = digitalRead(button);
  if (val_button == HIGH){
    counter++;
    delay(200);
  }
  else if (counter == 1) {
    Serial.println("1");
    delay(100);
    
  }  else if (counter == 2) {
    Serial.println("2");
    delay(100);
    
  }  else if (counter == 3) {
    Serial.println("3");
    delay(100);
    
  }  else if (counter == 4) {
    Serial.println("4");
    delay(100);
    
  }else if (counter == 5) {
    Serial.println("5");
    delay(100);
    
  } else if (counter == 6) {
    Serial.println("6");
    delay(100);
    
  } else if (counter == 7) {
    Serial.println("7");
    delay(100);
    
  } else if (counter == 8) {
    Serial.println("8");
    delay(100);
    
  }  else if (counter == 9) {
    Serial.println("9");
    delay(100);
    
  }
else if (counter == 10) {
    Serial.println("10");
    delay(100);
    
  }  
}
