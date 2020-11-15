#define LED_RED1 13
#define LED_GREEN1 12
#define LED_RED2 7
#define LED_GREEN2 8
#define IR1 3
#define IR2 5




void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(3,INPUT);
  pinMode(5,INPUT);

}

void loop() 
{
  if ((digitalRead(3)==digitalRead(5)))//Normal Traffic light
  {
    digitalWrite(LED_RED1,HIGH);
    digitalWrite(LED_GREEN2,HIGH);
    delay(5000);
    digitalWrite(LED_RED1,LOW);
    digitalWrite(LED_GREEN2,LOW);
    delay(10);
    digitalWrite(LED_GREEN1,HIGH);
    digitalWrite(LED_RED2,HIGH);
    delay(5000);
    digitalWrite(LED_GREEN1,LOW);
    digitalWrite(LED_RED2,LOW);
    delay(10);
  }
  else if ((digitalRead(3)==HIGH)&&(digitalRead(5)==LOW))//SMART ONE
  {
    digitalWrite(LED_RED1,LOW);
    digitalWrite(LED_GREEN2,LOW);
    digitalWrite(LED_GREEN1,HIGH);
    digitalWrite(LED_RED2,HIGH);
    delay(5000);
    digitalWrite(LED_GREEN1,LOW);
    digitalWrite(LED_RED1,HIGH);
    delay(10);
    digitalWrite(LED_GREEN2,HIGH);
    digitalWrite(LED_GREEN1,LOW);
    delay(5000);
    
  }
  else
  {
    digitalWrite(LED_RED2,LOW);
    digitalWrite(LED_GREEN1,LOW);
    digitalWrite(LED_GREEN2,HIGH);
    digitalWrite(LED_RED1,HIGH);
    delay(5000);
    digitalWrite(LED_RED1,LOW);
    digitalWrite(LED_GREEN2,LOW);
    delay(10);
    digitalWrite(LED_RED2,HIGH);
    digitalWrite(LED_GREEN1,HIGH);
    delay(5000);
      
    //digitalWrite(LED_GREEN1,LOW);
    //digitalWrite(LED_GREEN2,LOW);
    //digitalWrite(LED_RED1,HIGH);
    //digitalWrite(LED_RED2,HIGH);
    //delay(50);
  }

  // put your main code here, to run repeatedly:

}
