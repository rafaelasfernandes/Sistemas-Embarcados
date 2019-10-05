int ledPin9 = 9;
int ledPin10 = 10;
int ledPin5 = 5;
int ledPin4 = 4;
float sinVal_0;
float sinVal_25;
float sinVal_50;
float sinVal_100;
int ledVal_0;
int ledVal_25;
int ledVal_50;
int ledVal_100;

void setup() {
  // put your setup code here, to run once:
//  pinMode(10, OUTPUT);
  pinMode(ledPin10, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin4, OUTPUT);
}

void loop() {
  /*
    //potência de 0% de luminosidade
    sinVal_0 = (sin(50*(3.1412/180)));
    ledVal_0 = int(sinVal_0*0);
    analogWrite(ledPin9, ledVal_0);
    analogWrite(ledPin10, ledVal_0);
    analogWrite(ledPin5, ledVal_0);
    analogWrite(ledPin4, ledVal_0);
    delay(5000);
    analogWrite(ledPin9, LOW);
    analogWrite(ledPin8, LOW);
    analogWrite(ledPin5, LOW);
    analogWrite(ledPin4, LOW);*/

    //potência de 10% de luminosidade
    sinVal_50 = (sin(50*(3.1412/180)));
    ledVal_50 = int(sinVal_50*25);
    analogWrite(ledPin9, ledVal_50);
  

    //potência de 100% de luminosidade
    sinVal_50 = (sin(50*(3.1412/180)));
    ledVal_50 = int(sinVal_50*255);
    analogWrite(ledPin10, ledVal_50);
   

    //potência de 60% de luminosidade
    sinVal_50 = (sin(50*(3.1412/180)));
    ledVal_50 = int(sinVal_50*153);
    analogWrite(ledPin5, ledVal_50);
        
    //potência de 30% de luminosidade
    sinVal_50 = (sin(50*(3.1412/180)));
    ledVal_50 = int(sinVal_50*76);
    analogWrite(ledPin4, ledVal_50);
    
    
}
