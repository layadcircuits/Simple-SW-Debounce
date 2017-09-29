/***************************************************************************
 Project: Simple Software Switch Debounce
 
 Description: A simple approach to switch debouncing via software using short delays and multiple input checks.
 This is not the only debounce method and neither is it the best one. However, it is very simple
 and should help a novice user understand how to implement a debounce algorithm on an Arduino or
 any microcontroller by software method.

 Notes: 
 We assume a PBNO switch connected at pin 2. When the button is pressed and debounced correctly, 
 we display the number of times the button was pressed
 
 This software is free provided that this notice is not removed and proper attribution 
 is accorded to Layad Circuits and its Author(s).
 Layad Circuits invests resources in producing free software. By purchasing Layad Circuits'
 products or utilizing its services, you support the continuing development of free software
 for all.
  
 Author(s): C.D.Malecdan for Layad Circuits Electronics Engineering /  * For Questions/Comments: chris@layadcircuits.com
 Revision: 1.0 - 2017/08/17 - initial creation
 Layad Circuits Electronics Engineering Supplies and Services
 B314 Lopez Bldg., Session Rd. cor. Assumption Rd., Baguio City, Philippines
 www.layadcircuits.com
 general: info@layadcircuits.com
 sales: sales@layadcircuits.com
 +63-916-442-8565
 ***************************************************************************/
const byte BUTTON = 2;
const byte LED = 13;
boolean pressed;
unsigned int count;

void setup() {
  Serial.begin(9600);
  pinMode(BUTTON,INPUT_PULLUP);
  pinMode(LED,OUTPUT);
}

void loop() {
  if(digitalRead(BUTTON)==LOW){
    delay(1);
    if(digitalRead(BUTTON)==LOW){
      delay(1);
      if(digitalRead(BUTTON)==LOW){
        delay(1);
        if(digitalRead(BUTTON)==LOW){
          delay(1);
          if(digitalRead(BUTTON)==LOW){
            delay(1);
            if(digitalRead(BUTTON)==LOW){
              count++;
              Serial.print("Number of times button was pressed = ");
              Serial.println(count);
            }
          }
        } 
      }
    }
  }
}
