//Pisca-pisca Natalino:

void setup() {
  pinMode(10, OUTPUT);  // configura o pino digital 10 como saída (vermelho)
  pinMode(11, OUTPUT);  // configura o pino digital 11 como saída (verde)
  pinMode(12, OUTPUT);  // configura o pino digital 12 como saída (vermelho)
  pinMode(13, OUTPUT);	// configura o pino digital 14 como saída (verde)
}

void loop() {
  // Vermelho
  digitalWrite(10, HIGH);   // acende a luz VERMELHA
  digitalWrite(11, LOW);    // apaga a luz VERDE
  digitalWrite(12, HIGH);	//acende a lus VERMELHA
  digitalWrite(13, LOW); // apaga a luz VERDE
  delay(1000);              // tempo para o pisca-pisca vermelho

  digitalWrite(10, LOW);   // apaga a luz VERMELHA
  digitalWrite(11, HIGH);    // acende a luz VERDE
  digitalWrite(12, LOW);	// apaga a luz VERMELHA
  digitalWrite(13, HIGH); // acende a luz VERDE
  delay(1000);   
}