int topleft;
int topright;
int downleft;
int downright;

void setup() {
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);

  
}

void loop() {
  topleft = analogRead(A0);
  topright = analogRead(A1);
  downleft = analogRead(A2);
  downright = analogRead(A3);
  Serial.print ("topleft:");
  Serial.println (topleft);
  delay (10);
  Serial.print ("topright:");
  Serial.println (topright);

  if (topleft > topright) {
    //digitalWrite ( 9,HIGH );
    digitalWrite ( 8,HIGH );
    //digitalWrite ( 7,LOW );
    digitalWrite ( 10,LOW );
    delay(10);
  }
  if (downleft > downright) {
center 
  }
  if (topleft < topright) {
    //digitalWrite ( 9,LOW );
    digitalWrite ( 8,LOW );
    //digitalWrite ( 7,HIGH );
    digitalWrite ( 10,HIGH );
    delay(10);
  }
  //if (topleft == topright) {
    //digitalWrite ( 9,LOW );
    //digitalWrite ( 8,LOW );
    //digitalWrite ( 7,LOW );
    //digitalWrite ( 6,LOW );
    //delay(10);
}


