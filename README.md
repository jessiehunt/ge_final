# ge_final
Contains code for GE1111 final project
int greenLED=2;
int redLED=3;
int speaker=4;
int phresPin=12;
int photores=A0; 
int prVoltage;
int thresholddark = 100;
int thresholdmedium = 300;
int thresholdbright=750;
int greenButton = 5;
int redButton = 6;
int blueButton = 7;
int solenoidPin = 8; 
int buttonVoltageGreen;
int buttonVoltageBlue;
int buttonVoltageRed;
int totalNumPushed = 0; 
int blueNumPushed = 0; 
int redNumPushed = 0; 
int greenNumPushed = 0;

void setup() {
  pinMode(correctLEDpin,OUTPUT);
  pinMode(incorrectLEDpin,OUTPUT);
  pinMode(redPIN, INPUT_PULLUP); 
  pinMode(bluePIN, INPUT_PULLUP); 
  pinMode(greenPIN, INPUT_PULLUP);
  pinMode(speaker, OUTPUT); 
  Serial.begin(9600);
  pinMode(speakerPIN, OUTPUT);

}

void loop() {
 buttonVoltageGreen= digitalRead(greenPIN);
 buttonVoltageRed=digitalRead(redPIN);
 buttonVoltageBlue=digitalRead(bluePIN);
  if(buttonVoltageGreen == LOW) {
    greenNumPushed=greenNumPushed + 1; 
    delay(500);
  }
  if(buttonVoltageBlue == LOW) {
    blueNumPushed=blueNumPushed + 1; 
    delay(500);
  }
    if(buttonVoltageRed == LOW) {
    redNumPushed=redNumPushed + 1; 
    delay(500);
  }

  totalNumPushed=(greenNumPushed+blueNumPushed+redNumPushed); //total number of times pushed is equal to the number of times each button is pushed 
  if (totalNumPushed==3) { //if there are 3 pushes then evaluate whether the if statement is true or false 
    if ((greenNumPushed==1) && (blueNumPushed==2) && (redNumPushed==0)) { // if correct code is entered run this 
       digitalWrite(solenoidPin, LOW);//make sure door isnt deadbolted 
      digitalWrite(greenLED, HIGH);//turn on LED to indicate the system is on 
    //laser movement and such  
    while //laser is broken
      digitalWrite(greenLED, LOW);
      digitalWrite (redLED, HIGH);
      digitalWrite(solenoidPin, HIGH);      //Switch Solenoid ON
      tone (speaker, 400, 5000);
    }
      totalNumPushed=0; //resets so the buttons can be pushed again to turn back on  
      redNumPushed=0;
      blueNumPushed=0;
      greenNumPushed=0;
      }
    else {
         totalNumPushed=0; 
          redNumPushed=0;
          blueNumPushed=0;
          greenNumPushed=0;
      }

}
