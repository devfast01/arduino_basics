
int en = 5;
int value ;
void setup() {
pinMode(en,INPUT);
Serial.begin(9600);

}

void loop() {
value = digitalRead(en);

  if (value == HIGH){
    
    Serial.println("OBJECT");
  }else {
    Serial.println("NO OBJECT");
  }
  delay(50);

}
