#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}
int greenLED=2;
int redLED=3;
int speaker=4;
int phresPin=12;
int photores=A0; 
int prVoltage;
int thresholddark = 100;
int thresholdmedium = 300;
int thresholdbright=750;
int buttonPin = 5;
int solenoidPin = 8; 
int buttonVoltage;


void setup() {
  pinMode(correctLEDpin,OUTPUT);
  pinMode(incorrectLEDpin,OUTPUT);
  pinMode(buttonPIN, INPUT_PULLUP); 
  pinMode(speaker, OUTPUT); 
  Serial.begin(9600);
  pinMode(solenoidPin, OUTPUT)

}

void loop() {
 buttonVoltageGreen= digitalRead(buttonPin);
  if(buttonVoltage == LOW) {
      digitalWrite(solenoidPin, LOW);//make sure door isnt deadbolted 
      digitalWrite(greenLED, HIGH);//turn on LED to indicate the system is on 
    //laser movement and such  
    if //laser is broken
      digitalWrite(solenoidPin, HIGH);      //Switch Solenoid ON
      digitalWrite(greenLED, LOW);
      digitalWrite (redLED, HIGH);
      tone (speaker, 400, 300);
       digitalWrite (redLED, LOW);
       tone (speaker, 400, 300);
      if (buttonVoltage==LOW){
        digitalWrite(redLED, LOW);
        digitalWrite(solenoidPin, LOW);
        break 
      }
    else{
      delay(100);
    }
    }
   
     
      }
   

}
