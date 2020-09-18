
#include<SoftwareSerial.h>
SoftwareSerial mySerial (11,12); //RX,TX
void setup() {
  // put your setup code here, to run once:
mySerial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
mySerial.println("MUGDHO");
delay(2);



}
