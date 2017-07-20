#define OUTPUT_PIN 6
#define LIGHT_THRESHOLD 150

void setup() {
  pinMode( OUTPUT_PIN, OUTPUT );
  Serial.begin(9600);// initialize serial communication at 9600 bits per second:
}

void loop() {
  int sensorValue = analogRead(A0);

  if ( sensorValue < LIGHT_THRESHOLD )
    digitalWrite( OUTPUT_PIN, HIGH );
  else
    digitalWrite( OUTPUT_PIN, LOW );

  Serial.println(sensorValue); // Print light value to serial
  delay(200);        // delay in between reads for stability
}
