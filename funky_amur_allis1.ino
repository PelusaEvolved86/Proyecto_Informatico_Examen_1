#define LED1 2
#define LED2 3
#define LED3 4

#define LED4 6
#define LED5 7
#define LED6 8

#define boton 10

#define pot A1
void setup()
{
  pinMode( LED1, OUTPUT );
  pinMode( LED2, OUTPUT );
  pinMode( LED3, OUTPUT );
  
  pinMode( LED4, OUTPUT );
  pinMode( LED5, OUTPUT );
  pinMode( LED6, OUTPUT );
  
  pinMode( boton , OUTPUT );
  
  pinMode( pot , OUTPUT );
}

void loop()
{
  analogWrite( LED1 , 200 );
  analogWrite( LED2 , 100 );
  analogWrite( LED3 , 0 );
  delay( 1000 );
  analogWrite( LED4 , 207 );
  analogWrite( LED5 , 52 );
  analogWrite( LED6 , 118 );
  delay( 1000 );
  analogWrite( LED1 , HIGH );
  analogWrite( LED2 , LOW );
  analogWrite( LED3 , LOW );
  delay( 1000 );
  analogWrite( LED4 , HIGH );
  analogWrite( LED5 , HIGH );
  analogWrite( LED6 , LOW );
  delay( 1000 );
}