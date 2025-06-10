void setup() {
  pinMode(5,OUTPUT); //Declara el pin verde como un pin que da información
  pinMode(6,OUTPUT); //Declara el pin amarillo como un pin que da información
  pinMode(7,OUTPUT); //Declara el pin rojo como un pin que da información
}

void loop() {
  digitalWrite(5,HIGH); //Enciende el pin verde
  delay(3000); //Espera 3 segundos
  digitalWrite(5,LOW); //Apaga el pin verde
  digitalWrite(6,HIGH); //Enciende el pin amarillo
  delay(1000); //Espera 1 segundos
  digitalWrite(6,LOW); //Apaga el pin amarillo
  digitalWrite(7,HIGH); //Enciende el pin rojo
  delay(3000); //Espera 3 segundos
  digitalWrite(7,LOW); //Apaga el pin rojo
}
