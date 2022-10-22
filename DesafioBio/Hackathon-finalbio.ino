#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

int botao2=2;
int botao3=3;
int botao4=4;
int botao5=5;
int botao6=6;
int ledVermelho=7;
int ledVerde=8;
int ledAzul=9;
int ledBranco=10;
int ledAmarelo=11;
int buzzer=12;
//int iniciar=13;
int contador;

void setup() {
contador=0;
pinMode (botao2, INPUT);
pinMode (botao3, INPUT);
pinMode (botao4, INPUT);
pinMode (botao5, INPUT);
pinMode (botao6, INPUT);
pinMode (13, INPUT);
pinMode (ledVermelho, OUTPUT);
pinMode (ledVerde, OUTPUT);
pinMode (ledAzul, OUTPUT);
pinMode (ledBranco, OUTPUT);
pinMode (ledAmarelo, OUTPUT);
pinMode (buzzer, OUTPUT);
Serial.begin (9600);
}

void loop() {
  lcd.init();
  lcd.setBacklight(HIGH);
  lcd.setCursor(0,0);
  lcd.print("Veja as perguntas");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("na tela a frente");
  delay(1000);
pergunta1();
pergunta2();
pergunta3();
}

void   pergunta1(){
if (contador ==0){
Serial.println ("Aperte o botão para iniciar!");
delay (1000);
contador = contador + 1;
}
if (( digitalRead(13) == 0 )&& (contador==1) ){
delay(200);
Serial.println ("Apenas uma delas é absorvida pelo nosso intestino, sem passar pelo processo de digestão. Qual é?");
Serial.println ("1) Amido- Vermelho");
Serial.println ("2) DNA- Verde");
Serial.println ("3) Glicose- Azul");
Serial.println ("4) Proteínas- Branco");
Serial.println ("5) Enzimas- Amarelo");
delay (1000);

int continua=1;
while(continua==1)
{
if (digitalRead (botao2)==0){
delay(200);
digitalWrite (ledVermelho, 0);

//noTone (buzzer);
contador = contador + 1;
digitalWrite (ledVermelho, 1);
Serial.println ("Parabéns!!");
Serial.println ("2");
delay (1000);
digitalWrite (ledVermelho, 0);
delay (100);
Serial.println (" ");
Serial.println ("Aperte o botão novamente quando estiver pronto :)");
continua=0;
}

if (digitalRead (botao3)==0){
digitalWrite (ledVermelho, 0);
digitalWrite (ledVerde, 0);
digitalWrite (ledAmarelo, 0);
digitalWrite (ledBranco, 0);
digitalWrite (ledAzul, 0);
delay (1000);
digitalWrite (ledVermelho, 1);
digitalWrite (ledVerde, 1);
digitalWrite (ledAmarelo, 1);
digitalWrite (ledBranco, 1);
digitalWrite (ledAzul, 1);
Serial.println ("Cê tem certeza?? Certeza MESMO MESMO MESMO?");
contador = 0;
//tone(buzzer, 350, 1000);
continua=0;
}

if (digitalRead (botao4)==0){
digitalWrite (ledVermelho, 0);
digitalWrite (ledVerde, 0);
digitalWrite (ledAmarelo, 0);
digitalWrite (ledBranco, 0);
digitalWrite (ledAzul, 0);
delay (1000);
digitalWrite (ledVermelho, 1);
digitalWrite (ledVerde, 1);
digitalWrite (ledAmarelo, 1);
digitalWrite (ledBranco, 1);
digitalWrite (ledAzul, 1);
Serial.println ("Jura? Cara, confiava mais em você :'( ");
contador = 0;
continua=0;
//tone(buzzer, 350, 1000);
}

if (digitalRead (botao5)==0){
digitalWrite (ledVermelho, 0);
digitalWrite (ledVerde, 0);
digitalWrite (ledAmarelo, 0);
digitalWrite (ledBranco, 0);
digitalWrite (ledAzul, 0);
delay (1000);
digitalWrite (ledVermelho, 1);
digitalWrite (ledVerde, 1);
digitalWrite (ledAmarelo, 1);
digitalWrite (ledBranco, 1);
digitalWrite (ledAzul, 1);
contador = 0;
Serial.println ("Pô mano, ai não dá né");
//tone(buzzer, 350, 1000);
continua=0;
}

if (digitalRead (botao6)==0){
digitalWrite (ledVermelho, 0);
digitalWrite (ledVerde, 0);
digitalWrite (ledAmarelo, 0);
digitalWrite (ledBranco, 0);
digitalWrite (ledAzul, 0);
delay (1000);
digitalWrite (ledVermelho, 1);
digitalWrite (ledVerde, 1);
digitalWrite (ledAmarelo, 1);
digitalWrite (ledBranco, 1);
digitalWrite (ledAzul, 1);
contador = 0;
Serial.println ("Quase.. ou talvez não :)");
//tone(buzzer, 350, 1000);
continua=0;
}
}
}
}

void   pergunta2(){
if (( digitalRead(13) == 0 )&& (contador ==2)){
Serial.println ("Sobre o número de ossos do esqueleto o correto é:");
Serial.println ("1) é o mesmo durante toda a vida.- Vermelho");
Serial.println ("2) aumenta com a idade, pela fragmentação de certos ossos.- Verde");
Serial.println ("3) diminui com a idade, pela degeneração de certos ossos.- Azul");
Serial.println ("4) diminui com a idade, pela fusão de certos ossos.- Branco");
Serial.println ("5) aumenta com a idade, pela formação de novos ossos- Amarelo");
delay (1000);
int continua=1;
while(continua==1)
{

if (digitalRead (botao4)==0){
//noTone (buzzer);
digitalWrite (ledAzul, 0);
delay (1000);
digitalWrite (ledAzul, 1);
delay (1000);
digitalWrite (ledAzul, 0);
Serial.println ("Você é esperto mesmo em cara!");
Serial.println ("4");
delay (100);
Serial.println (" ");
contador = contador + 1;
Serial.println ("Aperte o botão novamente quando estiver pronto :)");
  continua=0;
}
if (digitalRead (botao3)==0){
digitalWrite (ledVermelho, 0);
digitalWrite (ledVerde, 0);
digitalWrite (ledAmarelo, 0);
digitalWrite (ledBranco, 0);
digitalWrite (ledAzul, 0);
delay (1000);
digitalWrite (ledVermelho, 1);
digitalWrite (ledVerde, 1);
digitalWrite (ledAmarelo, 1);
digitalWrite (ledBranco, 1);
digitalWrite (ledAzul, 1);
contador=0;
Serial.println ("Não é bem por aí não hein!");
  continua=0;
//tone(buzzer, 350, 1000);
}

if (digitalRead (botao2)==0){
digitalWrite (ledVermelho, 0);
digitalWrite (ledVerde, 0);
digitalWrite (ledAmarelo, 0);
digitalWrite (ledBranco, 0);
digitalWrite (ledAzul, 0);
delay (1000);
digitalWrite (ledVermelho, 1);
digitalWrite (ledVerde, 1);
digitalWrite (ledAmarelo, 1);
digitalWrite (ledBranco, 1);
digitalWrite (ledAzul, 1);
contador = 0;
Serial.println (" Vixi, acho que não hein");
  continua=0;
//tone(buzzer, 350, 1000);
}

if (digitalRead (botao5)==0){
digitalWrite (ledVermelho, 0);
digitalWrite (ledVerde, 0);
digitalWrite (ledAmarelo, 0);
digitalWrite (ledBranco, 0);
digitalWrite (ledAzul, 0);
delay (1000);
digitalWrite (ledVermelho, 1);
digitalWrite (ledVerde, 1);
digitalWrite (ledAmarelo, 1);
digitalWrite (ledBranco, 1);
digitalWrite (ledAzul, 1);
Serial.println ("Ih, pensa de novo ");
contador = 0;
continua=0;
//tone(buzzer, 350, 1000);
}

if (digitalRead (botao6)==0){
digitalWrite (ledVermelho, 0);
digitalWrite (ledVerde, 0);
digitalWrite (ledAmarelo, 0);
digitalWrite (ledBranco, 0);
digitalWrite (ledAzul, 0);
delay (1000);
digitalWrite (ledVermelho, 1);
digitalWrite (ledVerde, 1);
digitalWrite (ledAmarelo, 1);
digitalWrite (ledBranco, 1);
digitalWrite (ledAzul, 1);
contador = 0;
Serial.println ("Só mais uma vez, vai ");
  continua=0;
//tone(buzzer, 350, 1000);
}
}
}
  }
  
void pergunta3(){
  if (( digitalRead(13) == 0 )&& (contador ==3)){
Serial.println ("A falta de irrigação sanguínea do miocárdio e o infarto estão diretamente relacionados com:");
Serial.println ("1) o relaxamento excessivo da artéria aorta, que fica repleta de sangue venoso- Vermelho");
Serial.println ("2) uma obstrução ou estreitamento das artérias coronárias que levam sangue ao coração- Verde");
Serial.println ("3) a diminuição da frequência cardíaca.- Azul");
Serial.println ("4) uma alimentação pobre em gorduras e sais minerais.- Branco");
Serial.println ("5) ao aumento da frequência cardíaca- Amarelo");
delay (1000);
int continua=1;
while(continua==1)
{
if (digitalRead (botao3)==0){
digitalWrite (ledVerde, 0);
delay (1000);
//noTone (buzzer);
digitalWrite (ledVerde, 1);
delay (1000);
digitalWrite (ledVerde, 0);
contador = contador + 1;
Serial.println ("Devia ter ido pra Bio, hein!");
Serial.println ("0");
delay (100);
Serial.println (" ");
delay (1000);
Serial.println ("Achou que tinha acabado??? ");
Serial.println ("Bem vindo a fase final! ");
Serial.println ("O que o que é... ");
Serial.println ("Procure pela sala. Boa sorte! Ou nem tanto :)");
continua==0;
}

if(digitalRead (botao4)==0){
digitalWrite (ledVermelho, 0);
digitalWrite (ledVerde, 0);
digitalWrite (ledAmarelo, 0);
digitalWrite (ledBranco, 0);
digitalWrite (ledAzul, 0);
delay (1000);
digitalWrite (ledVermelho, 1);
digitalWrite (ledVerde, 1);
digitalWrite (ledAmarelo, 1);
digitalWrite (ledBranco, 1);
digitalWrite (ledAzul, 1);
contador = 0;
Serial.println ("ih, acho que você errou hein");
continua=0;
//tone(buzzer, 350, 1000);
}

if (digitalRead (botao2)==0){
digitalWrite (ledVermelho, 0);
digitalWrite (ledVerde, 0);
digitalWrite (ledAmarelo, 0);
digitalWrite (ledBranco, 0);
digitalWrite (ledAzul, 0);
delay (1000);
Serial.print ("Quem sabe ");
Serial.print (".");
Serial.print (".");
Serial.print (".");
Serial.print (".");
Serial.print (".");
Serial.print (".");
Serial.print (".");
Serial.print (".");
Serial.print (".");
Serial.print (".");
Serial.print (".");
Serial.print (".");
Serial.print (".");
Serial.print (".");
Serial.print (".");
Serial.print (".");
Serial.print (".");
Serial.print (".");
Serial.print (".");
digitalWrite (ledVermelho, 1);
digitalWrite (ledVerde, 1);
digitalWrite (ledAmarelo, 1);
digitalWrite (ledBranco, 1);
digitalWrite (ledAzul, 1);
contador = 0;
Serial.println ("mentira, tá errado mesmo :)");
continua=0;
//tone(buzzer, 350, 1000);
}

if(digitalRead (botao5)==0){
digitalWrite (ledVermelho, 0);
digitalWrite (ledVerde, 0);
digitalWrite (ledAmarelo, 0);
digitalWrite (ledBranco, 0);
digitalWrite (ledAzul, 0);
delay (1000);
digitalWrite (ledVermelho, 1);
digitalWrite (ledVerde, 1);
digitalWrite (ledAmarelo, 1);
digitalWrite (ledBranco, 1);
digitalWrite (ledAzul, 1);
Serial.println ("Quase lá... ");
contador = 0;
continua=0;
//tone(buzzer, 350, 1000);
}

if (digitalRead (botao6)==0){
digitalWrite (ledVermelho, 0);
digitalWrite (ledVerde, 0);
digitalWrite (ledAmarelo, 0);
digitalWrite (ledBranco, 0);
digitalWrite (ledAzul, 0);
delay (1000);
digitalWrite (ledVermelho, 1);
digitalWrite (ledVerde, 1);
digitalWrite (ledAmarelo, 1);
digitalWrite (ledBranco, 1);
digitalWrite (ledAzul, 1);
contador = 0;
Serial.println ("Tenta de novo... ");
continua=0;
delay (1000);
//tone(buzzer, 350, 1000);
}
}
}
}
