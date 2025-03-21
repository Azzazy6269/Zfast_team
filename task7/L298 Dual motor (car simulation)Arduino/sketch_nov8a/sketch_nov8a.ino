

#define MOTOR_1_PIN_1 2  
#define MOTOR_1_PIN_2 3  
#define MOTOR_2_PIN_1 4  
#define MOTOR_2_PIN_2 5  

void setup() {
    pinMode(MOTOR_1_PIN_1, OUTPUT);
    pinMode(MOTOR_1_PIN_2, OUTPUT);
    pinMode(MOTOR_2_PIN_1, OUTPUT);
    pinMode(MOTOR_2_PIN_2, OUTPUT);

    
}

void loop() {
    goForward();
    delay(10000);
    turnRight();
    delay(3000);   
    turnLeft();
    delay(4000);  
    goBackward();
    delay(2000);   

    
}


void goForward() {
    digitalWrite(MOTOR_1_PIN_1, HIGH);
    digitalWrite(MOTOR_1_PIN_2, LOW);
    digitalWrite(MOTOR_2_PIN_1, HIGH);
    digitalWrite(MOTOR_2_PIN_2, LOW);
}


void goBackward() {
    digitalWrite(MOTOR_1_PIN_1, LOW);
    digitalWrite(MOTOR_1_PIN_2, HIGH);
    digitalWrite(MOTOR_2_PIN_1, LOW);
    digitalWrite(MOTOR_2_PIN_2, HIGH);
}


void turnRight() {
    digitalWrite(MOTOR_1_PIN_1, LOW);
    digitalWrite(MOTOR_1_PIN_2, LOW);
    digitalWrite(MOTOR_2_PIN_1, HIGH);
    digitalWrite(MOTOR_2_PIN_2, LOW);
}


void turnLeft() {
    digitalWrite(MOTOR_1_PIN_1, HIGH);
    digitalWrite(MOTOR_1_PIN_2, LOW);
    digitalWrite(MOTOR_2_PIN_1, LOW);
    digitalWrite(MOTOR_2_PIN_2, LOW);
}



