int led = D6;





void setup() {
    pinMode(led,OUTPUT); // Our LED pin is output (lighting up the LED)

    //Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);
    Particle.subscribe("Deakin_RIOT_SIT210_Argon_Buddy", myHandler);
}

void loop() {

}

void myHandler(const char *event, const char *data)
{
    if (strcmp(data,"wave")==0) {
        // if your buddy's beam is intact, then turn your board LED off
        digitalWrite(led,HIGH);
        delay(500);
        digitalWrite(led,LOW);
        delay(500);
        digitalWrite(led,HIGH);
        delay(500);
        digitalWrite(led,LOW);
        delay(500);
        digitalWrite(led,HIGH);
        delay(500);
        digitalWrite(led,LOW);
        delay(500);
    }
    else if (strcmp(data,"pat")==0) {
        // if your buddy's beam is broken, turn your board LED on
        digitalWrite(led,HIGH);
        delay(1000);
        digitalWrite(led,LOW);
        delay(1000);
        digitalWrite(led,HIGH);
        delay(1000);
        digitalWrite(led,LOW);
        delay(1000);
        digitalWrite(led,HIGH);
        delay(1000);
        digitalWrite(led,LOW);
        delay(1000);
        digitalWrite(led,HIGH);
        delay(1000);
        digitalWrite(led,LOW);
        delay(1000);
    }
    else {
        // if the data is something else, don't do anything.
        // Really the data shouldn't be anything but those two listed above.
    }
}