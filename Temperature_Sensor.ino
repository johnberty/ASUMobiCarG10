const byte sensor = 1;
const byte led = 2;
void setup() {
pinMode ( sensor , INPUT ) ;
pinMode ( led , OUTPUT );
}
void loop() {
if (analogRead(sensor) > 25  )  
digitalWrite ( led , HIGH );
else 
digitalWrite ( led , LOW );
}
