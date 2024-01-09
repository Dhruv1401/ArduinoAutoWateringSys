#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define SOIL_MOISTURE_PIN A0
#define RELAY_PIN 7

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.backlight();

  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);  // Initially, turn off the relay

  lcd.print("Soil Moisture");
}

void loop() {
  int soilMoisture = analogRead(SOIL_MOISTURE_PIN);

  lcd.setCursor(0, 1);
  lcd.print("Moisture: " + String(soilMoisture));

  if (soilMoisture < 500) {  // Adjust the threshold based on your sensor reading
    lcd.setCursor(0, 0);
    lcd.print("Soil is dry. Watering...");

    waterPlants();
    delay(5000);  // Water for 5 seconds (adjust as needed)
    stopWatering();
  }

  delay(1000);  // Update every second
}

void waterPlants() {
  digitalWrite(RELAY_PIN, HIGH);  // Turn on the water pump
}

void stopWatering() {
  digitalWrite(RELAY_PIN, LOW);  // Turn off the water pump
  lcd.setCursor(0, 0);
  lcd.print("Soil Moisture");  // Reset the display message
}
