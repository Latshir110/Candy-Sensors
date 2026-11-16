// Prueba 2: envía "5" por el puerto serial cada vez que se presiona el botón
const int PIN_BOTON = 2;

int estadoAnterior = HIGH;

void setup() {
  Serial.begin(9600);
  pinMode(PIN_BOTON, INPUT_PULLUP);
}

void loop() {
  int estado = digitalRead(PIN_BOTON);

  // Detecta el momento en que se presiona (HIGH -> LOW)
  if (estadoAnterior == HIGH && estado == LOW) {
    Serial.println(5);
    delay(50); // anti-rebote
  }

  estadoAnterior = estado;
}
