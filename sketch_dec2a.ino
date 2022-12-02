#include <DHT.h>
int pin = A1;

DHT dht(pin, DHT22);

void setup() {
  Serial.begin(9600);

  dht.begin();
}

int val;


void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.print("humidity: ");
  Serial.println(h);

  Serial.print("temperature: ");
  Serial.println(t);

  delay(2000);
}
