int LED = 2;

 void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
}

void loop() {
  S(); O(); S();
  delay(1000);  
}

void S()
{
  for (int i=0; i <= 2; i++){
    digitalWrite(LED,HIGH);
    delay(200);
    digitalWrite(LED,LOW);
    delay(200);
  }
  delay(400);
}

void O()
{
  for (int i=0; i <= 2; i++){
    digitalWrite(LED,HIGH);
    delay(600);
    digitalWrite(LED,LOW);
    delay(200);
  }
  delay(400);
}
