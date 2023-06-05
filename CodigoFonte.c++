#include <LiquidCrystal_I2C.h>

// Pinos dos LEDs
const int ledVerde1Pin = 5;
const int ledVerde2Pin = 3;
const int ledVermelho1Pin = 7;
const int ledVermelho2Pin = 4;
const int ledAmareloPin = 6;

// Pinos dos sensores
const int sensorTempPin = A2;
const int potenciometroPin = A1;
const int fotorresistorPin = A0;

// Pino do buzzer
const int buzzerPin = 2;

// Constantes de temperatura
const int temperaturaLimiteSuperior = 25;
const int temperaturaLimiteInferior = 10;

// Constante de luminosidade
const int luminosidadeLimite = 900;

// Inicialização do LCD
LiquidCrystal_I2C lcd(32, 16, 2);

void setup() {
  // Configurar os pinos dos LEDs como saída
  
  pinMode(ledVerde1Pin, OUTPUT);
  pinMode(ledVerde2Pin, OUTPUT);
  pinMode(ledVermelho1Pin, OUTPUT);
  pinMode(ledVermelho2Pin, OUTPUT);
  pinMode(ledAmareloPin, OUTPUT);

  // Configurar o pino do buzzer como saída
  pinMode(buzzerPin, OUTPUT);

  // Inicializar o LCD
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
}

void Temp() {
	 // Ler o valor do sensor de temperatura
  int temperatura = analogRead(sensorTempPin);

  // Verificar se a temperatura está fora dos limites
  if (temperatura > temperaturaLimiteSuperior || temperatura < temperaturaLimiteInferior) {
    // Acender o LED amarelo
    digitalWrite(ledAmareloPin, HIGH);
    
    // Acionar o buzzer
    tone(buzzerPin, 500, 2000);
    // Exibir a temperatura no LCD
    lcd.setCursor(0, 0);
    lcd.print("Temperatura: ");
    lcd.print(temperatura);
    delay(2000);
    digitalWrite(ledAmareloPin, LOW);
    lcd.clear();
  } else {
    // Apagar o LED amarelo
    digitalWrite(ledAmareloPin, LOW);
    // Desligar o buzzer
    noTone(buzzerPin);
    digitalWrite(ledVerde1Pin, HIGH);
    
    lcd.setCursor(0, 0);
    lcd.print("Temperatura: ");
    lcd.print(temperatura);
    
    delay(2000);
    digitalWrite(ledVerde1Pin, LOW);
    lcd.clear();
  }
}

void Umd() {
	// Ler o valor do potenciômetro
  int valorPotenciometro = analogRead(potenciometroPin);
  float percentualPotenciometro = (valorPotenciometro / 1023.0) * 100.0;

  // Verificar se o valor do potenciômetro está acima de 50
  if (percentualPotenciometro > 50) {
    // Acender o LED vermelho 1
    digitalWrite(ledVermelho1Pin, HIGH);
    // Acionar o buzzer
    tone(buzzerPin, 500, 2000);
    // Exibir o valor do potenciômetro no LCD
    lcd.setCursor(0, 0);
    lcd.print("Umd.: ");
    lcd.print(percentualPotenciometro);
    lcd.print("%");
    delay(2000);
    digitalWrite(ledVermelho1Pin, LOW);
    lcd.clear();
  } else {
    // Apagar o LED vermelho 1
    noTone(buzzerPin);
    digitalWrite(ledVermelho1Pin, LOW);
    digitalWrite(ledVerde1Pin, HIGH);
     // Exibir o valor do potenciômetro no LCD
    lcd.setCursor(0, 0);
    lcd.print("Umd.: ");
    lcd.print(percentualPotenciometro);
    lcd.print("%");
    
    delay(2000);
    digitalWrite(ledVerde1Pin, LOW);
    lcd.clear();
  }
}

void lum(){
  // Verificar o valor do fotorresistor
  int luminosidade = analogRead(fotorresistorPin);

  // Verificar se a luminosidade está acima do limite
  if (luminosidade > luminosidadeLimite) {
    // Acender o LED vermelho 2
    digitalWrite(ledVermelho2Pin, HIGH);
    // Acionar o buzzer
    tone(buzzerPin, 500, 1000);
    // Exibir mensagem de luminosidade alta no LCD
    lcd.setCursor(0, 0);
    lcd.print("Luminosidade alta ");
    
    delay(2000);
    digitalWrite(ledVermelho2Pin, LOW);
    lcd.clear();
  } else {
    // Apagar o LED vermelho 2
    digitalWrite(ledVermelho2Pin, LOW);
    digitalWrite(ledVerde2Pin, HIGH);
    lcd.setCursor(0, 0);
    lcd.print("Luminosidade OK ");
    delay(2000);
    digitalWrite(ledVerde2Pin, LOW);
    lcd.clear();
  }
}
void loop() {
  Temp();
  delay(2000);
  Umd();
  delay(2000);
  lum();
  delay(2000);
  digitalWrite(ledVerde1Pin, LOW);
  digitalWrite(ledVerde2Pin, LOW);
  digitalWrite(ledVermelho1Pin, LOW);
  digitalWrite(ledVermelho2Pin, LOW);
  digitalWrite(ledAmareloPin, LOW);
  lcd.clear();
  delay(2000);
}
  