#include <LiquidCrystal.h>

// Ligações do Arduino
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  // Primeira mensagem
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Projeto");
  lcd.setCursor(0, 1);
  lcd.print("Projeto funcionando");
  delay(5000);

  // Segunda mensagem
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Nova mensagem");
  delay(5000);
}
