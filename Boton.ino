void setup () {
pinMode (12, INPUT_ PULLUP) ;
pinMode (13, OUTPUT) ;
}

// the loop function runs over and over again forever
void loop () {
int bot = digitalRead (12);
if (bot = LOW) // Si se presiona el botón
   digitalWrite (13, HIGH) ; // prende el LED
else {
digitalWrite (13, LOW) ; // apaga el LED
}
}