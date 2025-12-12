const int buttonPin = 2;   // button connected to pin 2
const int ledPin    = 9;   // LED connected to pin 9

int buttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // button to GND
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH); // LED ON when button pressed
  } else {
    digitalWrite(ledPin, LOW);  // LED OFF otherwise
  }
}
