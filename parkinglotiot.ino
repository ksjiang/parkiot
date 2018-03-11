#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
   char a[1] = {char(values[0])};
   char b[1] = {char(values[1])};
   char c[1] = {char(values[2])};
   char d[1] = {char(values[3])};
   char e[1] = {char(values[4])};
   char f[1] = {char(values[5])};
    Particle.publish("Space1",a,60,PUBLIC);
    Particle.publish("Space2",b,60,PUBLIC);
    Particle.publish("Space3",c,60,PUBLIC);
    Particle.publish("Space4",d,60,PUBLIC);
    Particle.publish("Space5",e,60,PUBLIC);
    Particle.publish("Space6",f,60,PUBLIC);
}
