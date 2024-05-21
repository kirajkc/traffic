#define channel1A 6
#define channel1B 5
#define channel1C 4

void setup(){
  //Init Serial USB
  Serial.begin(9600);
  Serial.println(F("Initialize System"));
 	pinMode(channel1A, OUTPUT);
 	pinMode(channel1B, OUTPUT); 
 	pinMode(channel1C, OUTPUT); 
}


void loop(){
  digitalWrite(channel1A, 1);
  Serial.println("red");
  delay(10000);
  digitalWrite(channel1A,0);

  digitalWrite(channel1B, 1);
  Serial.println("yellow");
  delay(10000);
  digitalWrite(channel1B,0);

  digitalWrite(channel1C, 1);
  Serial.println("green");
  delay(10000);
  digitalWrite(channel1C,0);
  Serial.flush();
}
