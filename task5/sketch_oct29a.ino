#define LED_RED 13
#define LED_YELLOW 12
#define LED_GREEN 11
void setup() {
  // put your setup code here, to run once:
    pinMode(LED_RED,OUTPUT);
    pinMode(LED_YELLOW,OUTPUT);
    pinMode(LED_GREEN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(LED_GREEN,HIGH);
    digitalWrite(LED_YELLOW,LOW);
    digitalWrite(LED_RED,LOW);
    delay(8000);
    digitalWrite(LED_GREEN,LOW);
    digitalWrite(LED_YELLOW,HIGH);
    digitalWrite(LED_RED,LOW);
    delay(2000);
    digitalWrite(LED_GREEN,LOW);
    digitalWrite(LED_YELLOW,LOW);
    digitalWrite(LED_RED,HIGH);
    delay(10000);
}
