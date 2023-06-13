
#include <LiquidCrystal.h>



int rs = 6;
int e = 7;
int d4 = 2;
int d5 = 3;
int d6 = 4;
int d7 = 5;


int led = 8;


int sensorPin = A0;


LiquidCrystal lcd(rs, e, d4, d5, d6, d7);

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(led, OUTPUT);
  
  lcd.begin(16, 2);
}

void loop(){
  float tmp = analogRead(sensorPin);
 
 
  
  float tmpCel = map(((tmp - 20) * 3.04), 0, 1023, -40, 125);

 
  lcd.setCursor(0, 0);
  lcd.print(tmpCel); 
  lcd.print(" \xDF" "C"); 
  

  
 
  if (tmpCel > 6){
  	digitalWrite(led, HIGH);
  	delay(500);
  	digitalWrite(led, LOW);
    delay(500);
    lcd.setCursor(0,1);
    lcd.print(" muito alta");
  }else{
    
     
  if (tmpCel < 2){
  	digitalWrite(led, HIGH);
  	delay(500);
  	digitalWrite(led, LOW);
    delay(500);
    lcd.setCursor(0,1);
    lcd.print(" muito baixa");
   
  }else{
    
  	lcd.setCursor(0,1);
    lcd.print("               ");
  }
  }
}

