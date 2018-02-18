  const byte  Green_Led = 1;
  const byte  Yellow_Led = 2;
  const byte  Red_Led = 3;
void setup ()
{
  pinMode ( Green_Led , OUTPUT );
  pinMode ( Yellow_Led , OUTPUT );
  pinMode ( Red_Led , OUTPUT );
}
void loop () 
{
  digitalWrite ( Green_Led , HIGH );
  delay ( 30000 );                // green led light on 30 seconds
  digitalWrite ( Green_Led , LOW );         //green led off
  for (byte i=0 ; i<=2 ; i++ )    // Yellow Flash 3 times
 {
  digitalWrite ( Yellow_Led , HIGH ) ;
  delay ( 1000 ) ;
  digitalWrite ( Yellow_Led , LOW ) ;
  delay ( 500 ) ;         
 }
 digitalWrite ( Red_Led , HIGH ) ;     //red led light on 30 seconds
 delay ( 30000 ) ;
 digitalWrite ( Red_Led , LOW ) ;  
}

