const int Pin=25;

void setup() {
    pinMode(Pin, INPUT);
    Serial.begin(9600);
}
 
void loop() {
    int sensorValue = digitalRead(Pin);
    if(sensorValue==HIGH){ 
        Serial.println("ON-State");
        delay(500);
    }
    else{
        Serial.println("OFF-State");
        delay(500);
    }
} 
