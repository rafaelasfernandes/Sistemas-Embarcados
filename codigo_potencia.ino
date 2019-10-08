int ledPin9 = 9;
int ledPin10 = 10;
int ledPin5 = 5;
int ledPin3 = 3;
float sinVal;
int ledVal;

//=====assinatura das funções=====
void potencia10();
void potencia30();
void potencia60();
void potencia100();

void setup() {
  pinMode(ledPin10, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  
    potencia10();
    potencia30();
    potencia60();
    potencia100();
   
}

//=====funções=====

void potencia10(){
  //potência de 10% de luminosidade
  sinVal = (sin(10*(3.1412/180)));
  ledVal = int(sinVal*25);
  analogWrite(ledPin9, ledVal);
}

void potencia30(){
  //potência de 30% de luminosidade
  sinVal = (sin(30*(3.1412/180)));
  ledVal = int(sinVal*76);
  analogWrite(ledPin3, ledVal);
}

void potencia60(){
  //potência de 60% de luminosidade
  sinVal = (sin(60*(3.1412/180)));
  ledVal = int(sinVal*153);
  analogWrite(ledPin5, ledVal);
}

void potencia100(){
  //potência de 100% de luminosidade
  sinVal = (sin(100*(3.1412/180)));
  ledVal = int(sinVal*255);
  analogWrite(ledPin10, ledVal);
}
