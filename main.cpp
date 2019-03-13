#include <Arduino.h>

String rrz;

String st1
String rz = "a";
char abc;
int z1 = 0;
int z2 = 0;
int z1b = 0;
int e = 0;
char c1;



void setup() {

  Serial.begin(9600);
  Serial.println("Type firts Number");

}

void loop() {




    if (Serial.available() && z1 == 0) {

      z1 = Serial.parseInt();
      z1b = 1;
      Serial.println("Zahl 1: ");
      Serial.println(z1);
      }




    if (Serial.available() && z1 != 0 && rz == "a") {

        rz = Serial.readStringUntil(abc);
        c1 = st1[0];
        Serial.println(rz);
      }




    if (Serial.available() &&  z1 != 0 && rz != "a" && z2 == 0) {
      int z2 = Serial.parseInt();

      Serial.println("Zahl 2: ");
      Serial.println(z2);


      e = z1+z2;
      Serial.println("Ergebnis: ");
      Serial.println(e);



      z1 = 0;
      z2 = 0;
      z1b = 0;
    }



}
