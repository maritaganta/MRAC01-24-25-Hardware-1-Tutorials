// -------------------------------------------------
// Copyright (c) 2022 HiBit <https://www.hibit.dev>
// -------------------------------------------------

#define BUZZER_PIN 9

#define A 440
#define B 494
#define C 523
#define D 587
#define E 659
#define F 698
#define G 784

void setup()
{
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop()
{
  tone(BUZZER_PIN, E, 200);
  delay(400);

  tone(BUZZER_PIN, E, 200);
  delay(400);

  tone(BUZZER_PIN, F, 200);
  delay(400);

  tone(BUZZER_PIN, G, 200);
  delay(400);

  tone(BUZZER_PIN, G, 200);
  delay(400);

  tone(BUZZER_PIN, F, 200);
  delay(400);


  tone(BUZZER_PIN, E, 200);
  delay(400);

  tone(BUZZER_PIN, D, 200);
  delay(400);

  tone(BUZZER_PIN, C, 200);
  delay(400);
  tone(BUZZER_PIN, C, 200);
  delay(400);

  tone(BUZZER_PIN, D, 200);
  delay(400);
  tone(BUZZER_PIN, E, 200);
  delay(400);
  tone(BUZZER_PIN, E, 800);
  delay(400);
  tone(BUZZER_PIN, D, 200);
  delay(400);
  tone(BUZZER_PIN, D, 400);
  delay(1000);

}