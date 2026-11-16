// Prueba 1: envía un contador por el puerto serial cada 500 ms
int contador = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(contador);
  contador++;
  delay(500);
}
