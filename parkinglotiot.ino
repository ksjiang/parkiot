int values[6];


void setup() {
 pinMode(D2,INPUT);
 pinMode(D3,INPUT);
 pinMode(D4,INPUT);
 pinMode(D5,INPUT);
 pinMode(D6,INPUT);
 pinMode(D7,INPUT);
}

void loop() {
    values[0] = digitalRead(D2);
    values[1] = digitalRead(D3);
    values[2] = digitalRead(D4);
    values[3] = digitalRead(D5);
    values[4] = digitalRead(D6);
    values[5] = digitalRead(D7);
    Particle.publish("Space1",values[0],60,PRIVATE);
    Particle.publish("Space2",values[1],60,PRIVATE);
    Particle.publish("Space3",values[2],60,PRIVATE);
    Particle.publish("Space4",values[3],60,PRIVATE);
    Particle.publish("Space5",values[4],60,PRIVATE);
    Particle.publish("Space6",values[5],60,PRIVATE);
}