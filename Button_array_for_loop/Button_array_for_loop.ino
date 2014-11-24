int buttonPin = 1;
int buttonState = 0;
int timer = 50;           // The higher the number, the slower the timing.
int ledPins[] = {2, 3, 4, 5, 6, 7};       // an array of pin numbers to which LEDs are attached
int pinCount = 6;           // the number of pins (i.e. the length of the array)

void setup() {
  // the array elements are numbered from 0 to (pinCount - 1).
  // use a for loop to initialize each pin as an output:
  for (int thisPin = 0; thisPin < pinCount; thisPin++)  {
    pinMode(ledPins[thisPin], OUTPUT); 
    pinMode(buttonPin, INPUT);    
  }
}

void loop() {
  // loop from the lowest pin to the highest:
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) 
  {for (int thisPin = 0; thisPin < pinCount; thisPin++) { 
    // turn the pin on:
    digitalWrite(ledPins[thisPin], HIGH);   
    delay(timer);                  
    // turn the pin off:
    digitalWrite(ledPins[thisPin], HIGH);
  }

  // loop from the highest pin to the lowest:
  for (int thisPin = pinCount - 1; thisPin >= 0; thisPin--) { 
    // turn the pin on:
    digitalWrite(ledPins[thisPin], HIGH);
    delay(timer);
    // turn the pin off:
    digitalWrite(ledPins[thisPin], LOW);
  }
  }
}
