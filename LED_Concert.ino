
 
int counter = 0;
int hehe = 1;
int biwwiejean = 0;

void setup() { 
   pinMode(7, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(4, OUTPUT);
}

void loop() {
  while(biwwiejean <= 1){
    allOn();
    delay(250);
    allOff(); 
    delay(250);
    allOn();
    delay(1000);
    allOff(); 
    delay(250);
    allOn();
    delay(250);
    allOff();
    delay(250);
    allOn();
    delay(250);
    allOff();
    delay(250);
    allOn();
    delay(750);
    allOff();
    delay(500);
    
    while(counter <= 1){
      if(hehe%2 == 0){
        for(int i = 4; i < 8; i++){
          digitalWrite(i, HIGH);
          delay(250);
        }
      } else {
        for(int i = 7; i > 3; i--){
          digitalWrite(i, HIGH);
          delay(250);
        }
      }
    
      allOff();
      delay(100);
      allOn();
      delay(250);
      allOff();
      delay(700);
      
      counter++;
      hehe++;
    }
    biwwiejean++;
  }
  allOff();
  delay(2000);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  delay(750);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  delay(750);
  allOff();
  
}
  
void allOn(){
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
}

void allOff(){
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
}
