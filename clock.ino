void setup() {
DDRA=0xFF;
DDRB=0xFF;
DDRC=0xFF;
}

void loop() {

  for (int a=0;a<=1 ; a++){
    for (int b=1;b<=9 ; b++){
      for (int c=0;c<=5 ; c++){
        for (int d=0;d<=9 ; d++){
          for (int e=0;e<=5 ; e++){
            for (int f=0;f<=9 ; f++){
              if (a==1 & b==3){
              a=0;
              b=1;
              }
              PORTC=e << 4;
              PORTC=PORTC|f;
              PORTA=c << 4;
              PORTA=PORTA|d;
              PORTB=a<<4;
              PORTB=PORTB|b;
              delay(1000);
            }
          } 
        }
      }
    }
  }

}