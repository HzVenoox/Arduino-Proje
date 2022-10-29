[ Photo ]
#include <LiquidCrystal.h>
#define echoPin 6
#define trigPin 7
#define ledPin 10
#define ledPin2 9

int maximumRange = 50;
int minimumRange = 0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2 );

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
Serial.begin(9600);
lcd.begin(16, 2);
}

void loop() {

  int olcum = mesafe(maximumRange, minimumRange);
 

}

int mesafe(int maxrange, int minrange);
{
  long duration, distance;

  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
}
  duration = pulseIn(echoPin, HIGH);
  distance = duration / 58.2;
  Serial.println(duration);

  if(duration < 3000) {
   digitalWrite(ledPin2, HIGH);
lcd.print("KAPİ ACİLDİ"); 
  }
 if(duration > 3000) {
   digitalWrite(ledPin2, LOW);
lcd.print("KAPİ KAPANDİ");  
  }

  if(distance >= maxrange || distance <= minrange)
  return 0;
  return distance;
}
