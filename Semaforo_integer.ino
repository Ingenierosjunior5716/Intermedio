int verde = 5;
int amarillo = 6;
int rojo = 7;

void setup() {
  pinMode(verde,OUTPUT); //Declara el pin verde como un pin que da información
  pinMode(amarillo,OUTPUT); //Declara el pin amarillo como un pin que da información
  pinMode(rojo,OUTPUT); //Declara el pin rojo como un pin que da información
}

void loop() {
  digitalWrite(verde,HIGH); //Enciende el pin verde
  delay(3000); //Espera 3 segundos

  digitalWrite(verde,LOW); //Apaga el pin verde
  digitalWrite(amarillo,HIGH); //Enciende el pin amarillo
  delay(1000); //Espera 1 segundos

  digitalWrite(amarillo,LOW); //Apaga el pin amarillo
  digitalWrite(rojo,HIGH); //Enciende el pin rojo
  delay(3000); //Espera 3 segundos
  
  digitalWrite(rojo,LOW); //Apaga el pin rojo
}