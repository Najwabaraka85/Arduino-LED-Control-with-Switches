//  DIGITAL OUTPUTS
int d1 = 10 ;
int d2 = 9 ;//low
int d3 = 8;
int d4 = 7 ;//low
// ANALOG OUTPUTS
int a1 = 6;
int a2 = 5 ;
// INPUTS
int b1 = 11 ;
int b2 =12 ;
//READING
int reading1 =0; 
int reading2 =0; 
// COUNTERS
int c1 =0 ;
int c2 =0 ;
void setup() {
for (int i= 7 ; i <11 ; i++)
{ pinMode(i , OUTPUT);
}
pinMode(a1 , OUTPUT);
pinMode(a2 , OUTPUT);
pinMode(b1 , INPUT);
pinMode(b2 , INPUT);
}
void loop() {
reading1 = digitalRead(b1);
if (reading1 == HIGH )
{
 digitalWrite(d1 , HIGH );
   analogWrite(a1 , 128 );
   digitalWrite(d2 , LOW );
   digitalWrite(d4 , LOW );
 }
 else
 {digitalWrite(d1 , LOW );
  analogWrite(a1 , 0 );
   digitalWrite(d2 , LOW );
   digitalWrite(d4 , LOW );
 }
 reading2 = digitalRead(b2);
if (reading2 == HIGH )
{ digitalWrite(d3 , HIGH );
   analogWrite(a2 , 128 );
    digitalWrite(d2 , LOW );
   digitalWrite(d4 , LOW );
}
 else
 {digitalWrite(d3 , LOW );
  analogWrite(a2 , 0 );
   digitalWrite(d2 , LOW );
   digitalWrite(d4 , LOW );
 }
}













