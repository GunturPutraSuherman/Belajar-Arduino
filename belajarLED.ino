int pinLED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLED, OUTPUT); // Mau Nyala
  Serial.begin(9600);
  Serial.println("Menyiapkan");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinLED, HIGH); // Menyiapkan
  Serial.println("NYALA");
  delay(250);
  digitalWrite(pinLED, LOW); // Menyiapkan
  Serial.println("MATI");
  delay(250);
  digitalWrite(pinLED, HIGH); // Menyiapkan
  Serial.println("NYALA");
  delay(1500);
  digitalWrite(pinLED, LOW); // Menyiapkan
  Serial.println("MATI");
  delay(1500);
}
