/**
 * Cumple con lo básico de lo requerido en la tarea,
 * se espera que desde esta base en adelante
 * se aumente la complejidad
 *
 */
int a = 2, b = 4;
int suma = a + b;

void setup() {
  // put your setup code here, to run once:
Serial.begin(500);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(a);
Serial.println(b);


delay(500);
}
