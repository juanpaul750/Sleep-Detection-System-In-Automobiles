#include <LiquidCrystal.h>

// Pin configuration
const int rs = 13, en = 12, d4 = 11, d5 = 10, d6 = 9, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int ir_pin = 7;
int alarm = 6;
int seatVib = 5;
int brake = 4;

void setup() {
    pinMode(ir_pin, INPUT); // SENSOR
    pinMode(alarm, OUTPUT);
    pinMode(seatVib, OUTPUT);
    pinMode(brake, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    digitalWrite(alarm, HIGH);
    digitalWrite(seatVib, HIGH);
    digitalWrite(brake, HIGH);

    lcd.begin(16, 2);
    lcd.setCursor(5, 0);
    lcd.print("EYE BLINK");
    lcd.setCursor(3, 1);
    lcd.print("BUMPER BRAKE");
    delay(100);
    lcd.clear();

    int s = digitalRead(ir_pin);
    Serial.print(s);

    if (s == 1) {
        delay(1000);
        lcd.setCursor(0, 0);
        lcd.print("Checking for");
        lcd.setCursor(0, 1);
        lcd.println("Eye Movement....");
        delay(1000);
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Normal Status");
        digitalWrite(alarm, HIGH);
        digitalWrite(seatVib, HIGH);
        digitalWrite(brake, HIGH);
    } else {
        delay(1000);
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Checking for");
        lcd.setCursor(0, 1);
        lcd.println("Eye Movement....");
        delay(1000);

        int g = digitalRead(ir_pin);
        if (g == 0) {
            digitalWrite(alarm, LOW);
            digitalWrite(seatVib, HIGH);
            digitalWrite(brake, HIGH);
            lcd.clear();
            lcd.setCursor(0, 0);
            lcd.print("Sleep Detected");
            delay(1000);
        }
    }

    if (s == 0) {
        delay(1000);
        int t = digitalRead(ir_pin);
        if (t == 0) {
            delay(1000);
            int f = digitalRead(ir_pin);
            if (f == 0) {
                digitalWrite(alarm, LOW);
                digitalWrite(seatVib, LOW);
                digitalWrite(brake, HIGH);
                lcd.clear();
                lcd.setCursor(0, 0);
                lcd.print("Sleep Seeked");
                delay(500);
            }
        }
    } else {
        digitalWrite(alarm, HIGH);
        digitalWrite(seatVib, HIGH);
        digitalWrite(brake, HIGH);
        delay(500);
    }

    int u = digitalRead(ir_pin);
    if (u == 0 && s == 0) {
        delay(1000);
        int h = digitalRead(ir_pin);
        if (h == 0) {
            delay(500);
            digitalWrite(alarm, LOW);
            digitalWrite(seatVib, LOW);
            digitalWrite(brake, LOW);
            lcd.clear();
            lcd.setCursor(0, 0);
            lcd.print("Sleep Confirmed");
            delay(1000000);
        }
    }
}
