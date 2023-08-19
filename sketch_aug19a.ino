const int ledPin = 13; // LED connected to pin 13
const int dotLength = 500; // Length of a dot in milliseconds
const int dashLength = 1500; // Length of a dash in milliseconds
const int spaceLength = 250; // Length of a space between characters in milliseconds
const int wordLength = 750; // Length of a space between words in milliseconds

// Function to blink LED for a dot
void dot() {
  digitalWrite(ledPin, HIGH);
  delay(dotLength);
  digitalWrite(ledPin, LOW);
  delay(spaceLength);
}

// Function to blink LED for a dash
void dash() {
  digitalWrite(ledPin, HIGH);
  delay(dashLength);
  digitalWrite(ledPin, LOW);
  delay(spaceLength);
}

// Morse code for the word "Mayank"
void mayank() {
  dot();
  dash();
  dot();
  dot();
  dot();
  dash();
  dot();
  dot();
  dash();
  dot();
}

int buttonPin = 8; // Push button connected to pin 8

void setup() {
  pinMode(ledPin, OUTPUT); // Set LED pin as output
  pinMode(buttonPin, INPUT); // Set button pin as input
}

void loop() {
  // Blink the LED as "Mayank"
if(digitalRead(8) == HIGH) { mayank();

  // Wait for a space between words
  delay(wordLength);} 
else
{
digitalWrite(13, LOW);
  delay(2000);
}
}