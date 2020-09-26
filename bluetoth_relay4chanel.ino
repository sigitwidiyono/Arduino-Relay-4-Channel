const int relay1 = 8;
const int relay2 = 9;
const int relay3 = 10;
const int relay4 = 11;

const int led1 = 4 ; // relay1 menyala led1 juga menyala
const int led2 = 5 ; // relay2 menyala led2 juga menyala
const int led3 = 6 ; // relay3 menyala led3 juga menyala
const int led4 = 7 ; // relay4 menyala led4 juga menyala

//int data ;

void setup() {
  // put your setup code here, to run once:
  pinMode(relay1,OUTPUT); // port 8 arduino
  pinMode(relay2,OUTPUT); // port 9 arduino
  pinMode(relay3,OUTPUT); // port 10 arduino
  pinMode(relay4,OUTPUT); // port 11 arduino
  
  pinMode(led1,OUTPUT); // port 4 arduino
  pinMode(led2,OUTPUT); // port 5 arduino
  pinMode(led3,OUTPUT); // port 6 arduino
  pinMode(led4,OUTPUT); // port 7 arduino

  // setting bluetoth
  //Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(relay1,LOW); // posisi relay1 off
  digitalWrite(relay2,LOW); // posisi relay2 off
  digitalWrite(relay3,LOW); // posisi relay3 off
  digitalWrite(relay4,LOW); // posisi relay4 off

  digitalWrite(led1,HIGH); // posisi led1 tidak menyala
  digitalWrite(led2,HIGH); // posisi led2 tidak menyala
  digitalWrite(led3,HIGH); // posisi led3 tidak menyala
  digitalWrite(led4,HIGH); // posisi led4 tidak menyala
  //data = Serial.available();
  //Serial.println(data);
}
