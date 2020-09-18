//pin select
int led = 13;
int value = 0;
int led2 = 7;
int buzz = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (led, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (buzz, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available() > 0)
  {
    value = Serial.read();
    delay(5);//important

    if (value == '1')
    {
      digitalWrite(led, HIGH);
      Serial.println("Led is ON");
    }
    if (value == '0') {
      digitalWrite(led, LOW);
      Serial.println("LED is OFF");
    }

    if (value == '2')
    {
      digitalWrite(led2, HIGH);
      Serial.println("Led2 is ON");
    }
    if (value == '3')
    {
      digitalWrite(led2, LOW);
      Serial.println("Led2 is OFF");
    }

    if (value == '4')
    {
      digitalWrite(buzz, HIGH);
      Serial.println("buzz is ON");
    }
    if (value == '5')
    {
      digitalWrite(buzz, LOW);
      Serial.println("buzz is OFF");
    }

    if (value > '5')
    {
      digitalWrite(buzz, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led, LOW);

      Serial.println("All is OFF");
    }
    

  }


}
