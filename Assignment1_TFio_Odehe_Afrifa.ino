int startValue = 5;
int ledPin = 13;

// Function to blink the LED a specified number of times
void flashLED(int times) {
  int flashCount = times;

  while (flashCount > 0) {
    digitalWrite(ledPin, HIGH);
    delay(200);

    digitalWrite(ledPin, LOW);
    delay(200);

    flashCount = flashCount - 1;
  }
}

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("=== Smart Countdown Starting ===");

  int count = startValue;

  while (count > 0) {
    Serial.print("Count: ");
    Serial.println(count);

    flashLED(count);

    delay(1000);

    count = count - 1;
  }

  Serial.println("=== Countdown Complete ===");
}

void loop() {
  // put your main code here, to run repeatedly:

}
