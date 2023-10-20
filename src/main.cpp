/*
  Titre      : Blink
  Auteur     : Crepin Vardin Fouelefack
  Date       : 20/10/2023
  Description: Blink led
  Version    : 0.0.1
*/

#include <Arduino.h>

int ledPin = 13;  // Définir la broche 13 comme sortie pour la LED

void setup() {
  pinMode(ledPin, OUTPUT);  // Configuration de la broche de la LED en tant que sortie
  Serial.begin(9600);      // Initialisation de la communication série à 9600 bauds
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Allumer la LED
  Serial.println("LED allumee");
  delay(1000);  // Attendre 1 seconde

  digitalWrite(ledPin, LOW);  // Éteindre la LED
  Serial.println("LED eteinte");
  delay(1000);  // Attendre 1 seconde
}
