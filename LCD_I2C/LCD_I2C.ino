#include <DHT.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>

#define DHT_PIN 2


/* 
 *  0x27
 *  0x3F
 */

LiquidCrystal_I2C wysw(0x3F,16,2);
DHT czujnik;

void setup() {
  Serial.begin(9600);
  wysw.begin(); 
  czujnik.setup(DHT_PIN);
  wysw.setCursor(0,0);
  wysw.print("Temp: ");
  wysw.setCursor(0,1);
  wysw.print("Wilg: ");

}

void loop() {

  delay(czujnik.getMinimumSamplingPeriod());

  wysw.setCursor(7,0);
  wysw.print(czujnik.getTemperature());
  Serial.print(czujnik.getTemperature());
  wysw.setCursor(13,0);
  wysw.print("C");
  Serial.println(" C");

  wysw.setCursor(7,1);
  wysw.print(czujnik.getHumidity());
  wysw.setCursor(13,1);
  wysw.print("%");
  
  /* wysw.backlight();
  delay(5000);
  wysw.noBacklight();
  delay(5000); */
  

}
