#define redPin 2
#define greenPin 3
#define bluePin 4
#define whitePin 5

#define speedRegulator A0

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(whitePin, OUTPUT);
  pinMode(speedRegulator, INPUT);
}

void loop() {
  analogWrite(redPin, random(1023));
  analogWrite(greenPin, random(1023));
  analogWrite(bluePin, random(1023));
  analogWrite(whitePin, random(1023));
  delay(analogRead(speedRegulator));
}
