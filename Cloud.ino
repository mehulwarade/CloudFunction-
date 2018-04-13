void setup()
{
Serial.begin(9600);
 RGB.control(true);
 Particle.function("led", led);
}

void loop()
{
 
}

int led (String value){
    int i = 0;
if (value == "red"){
  for( int i = 0 ; i < 256; i++){
    RGB.color( i, 0,0 );
    delay( 5 ); //RED COLOR
   }
 }
 
 if (value == "blue"){
 for( int i = 0 ; i < 256; i++){
     RGB.color( 0,0,i );
    delay( 5 ); //BLUE COLOR
  }
 }
 
 if (value == "green"){
 for( int i = 0 ; i < 256; i++){
    RGB.color( 0,i,0 );
    delay( 5 ); //GREEN COLOR
  }
 }
  return 1;
}
