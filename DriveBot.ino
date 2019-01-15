#include <SoftwareSerial.h>
SoftwareSerial BT(10, 11); //TX, RX respetively

void setup() {
Serial.begin(9600);
BT.begin(9600);

pinMode(3,OUTPUT);    // RIGHT MOTOR 1
pinMode(4,OUTPUT);    // RIGHT MOTOR 2
pinMode(5,OUTPUT);    // LEFT MOTOR 1
pinMode(6,OUTPUT);    // LEFT MOTOR 2
}

void loop() {
while (BT.available()){                       //Check if there is an available byte to read
delay(10);                                    //Delay added to make communication stable
char b = BT.read();                           //Define BT read character

if(b=='w'){
  Serial.println("ROBOT IS MOVING FORWARD");                // FORWARD
  BT.println("ROBOT IS MOVING FORWARD");
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  
}

if(b=='s'){
  Serial.println("ROBOT IS MOVING BACKWARD");                // BACKWARD
  BT.println("ROBOT IS MOVING BACKWARD");
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
}

if(b=='d'){
  Serial.println("ROBOT IS TAKING RIGHT TURN");               // RIGHT
  BT.println("ROBOT IS TAKING RIGHT TURN");
  digitalWrite (3,HIGH);
  digitalWrite (4,LOW);
  digitalWrite (5,LOW);
  digitalWrite (6,HIGH);
}

if(b=='a'){
  Serial.println("ROBOT IS TAKING LEFT TURN");                // LEFT
  BT.println("ROBOT IS TAKING LEFT TURN");
  digitalWrite (3,LOW);
  digitalWrite (4,HIGH);
  digitalWrite (5,HIGH);
  digitalWrite (6,LOW);
}

if(b=='x'){
  Serial.println("ROBOT HAS STOPPED");                        // STOP
  BT.println("ROBOT HAS STOPPED");
  digitalWrite (3,LOW);
  digitalWrite (4,LOW);
  digitalWrite (5,LOW);
  digitalWrite (6,LOW);  
}
b="";                                                         //Reset the variable
}





while (Serial.available()){                   //Check if there is an available byte to read
delay(10);                                    //Delay added to make communication stable
char s = Serial.read();                       //Define BT read character

if(s=='w'){
  Serial.println("ROBOT IS MOVING FORWARD");                // FORWARD
  BT.println("ROBOT IS MOVING FORWARD");
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  
}

if(s=='s'){
  Serial.println("ROBOT IS MOVING BACKWARD");                // BACKWARD
  BT.println("ROBOT IS MOVING BACKWARD");
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
}

if(s=='d'){
  Serial.println("ROBOT IS TAKING RIGHT TURN");               // RIGHT
  BT.println("ROBOT IS TAKING RIGHT TURN");
  digitalWrite (3,HIGH);
  digitalWrite (4,LOW);
  digitalWrite (5,LOW);
  digitalWrite (6,HIGH);
}

if(s=='a'){
  Serial.println("ROBOT IS TAKING LEFT TURN");                // LEFT
  BT.println("ROBOT IS TAKING LEFT TURN");
  digitalWrite (3,LOW);
  digitalWrite (4,HIGH);
  digitalWrite (5,HIGH);
  digitalWrite (6,LOW);
}

if(s=='x'){
  Serial.println("ROBOT HAS STOPPED");                        // STOP
  BT.println("ROBOT HAS STOPPED");
  digitalWrite (3,LOW);
  digitalWrite (4,LOW);
  digitalWrite (5,LOW);
  digitalWrite (6,LOW);  
}
s="";                                                         //Reset the variable
}
}
