#include <Arduino.h>
#include <Keyboard.h>

#define BUTTON_PIN 9

void setup()
{
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  Serial.begin(9600);
  Keyboard.begin();
}

void loop()
{
  if (digitalRead(BUTTON_PIN) == LOW)
  {
    Serial.write("Starting Rick Roll Attack!\n");

    Keyboard.press(KEY_LEFT_GUI);
    delay(100);
    Keyboard.releaseAll();

    delay(1500);
    Keyboard.print("terminal");
    delay(750);

    Keyboard.press(KEY_RETURN);
    delay(100);
    Keyboard.releaseAll();

    delay(1500);
    Keyboard.print("xdg-open https://youtu.be/dQw4w9WgXcQ");
    delay(500);
    Keyboard.press(KEY_RETURN);
    delay(500);
    Keyboard.releaseAll();

    Serial.write("Rick Roll attack are deployed!\n");

    delay(2000);
  }
}
