void setup() {
  // put your setup code here, to run once:
pinMode(A0,OUTPUT);
pinMode(A1,OUTPUT);
pinMode(A2,OUTPUT);
pinMode(A3,OUTPUT);

}
  
void loop() {
  // put your main code here, to run repeatedly:
  /*digitalWrite(A0,HIGH);//106,92MHZ=1
  digitalWrite(A1,LOW);
  digitalWrite(A2,LOW);
  digitalWrite(A3,HIGH);
  delay(2000);*/
  
  digitalWrite(A0,LOW);//88,7MHZ=0
  digitalWrite(A1,HIGH);
  digitalWrite(A2,LOW);
  digitalWrite(A3,HIGH);
  delay(2000);
  /*
  digitalWrite(A0,HIGH);//106,92MHZ=1
  digitalWrite(A1,LOW);
  digitalWrite(A2,LOW);
  digitalWrite(A3,HIGH);
  delay(2000);
  digitalWrite(A0,LOW);//88,7MHZ=0
  digitalWrite(A1,HIGH);
  digitalWrite(A2,LOW);
  digitalWrite(A3,HIGH);
  delay(2000);
  digitalWrite(A0,HIGH);//106,92MHZ=1
  digitalWrite(A1,LOW);
  digitalWrite(A2,LOW);
  digitalWrite(A3,HIGH);
  delay(2000);
  digitalWrite(A0,HIGH);//106,92MHZ=1
  digitalWrite(A1,LOW);
  digitalWrite(A2,LOW);
  digitalWrite(A3,HIGH);
  delay(2000);
  digitalWrite(A0,LOW);//88,7MHZ=0
  digitalWrite(A1,HIGH);
  digitalWrite(A2,LOW);
  digitalWrite(A3,HIGH);
  delay(10000);*/ 
}
