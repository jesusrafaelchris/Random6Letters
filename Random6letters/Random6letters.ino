
char message[6];
long randNumber;

void setup() {
  Serial.begin(115200); while (!Serial); delay(200);
  randomSeed(analogRead(0));
  random_6_letter_code();
}

void loop() {

  Serial.println(message);
}


void random_6_letter_code() {
  int generated=0;
  
  while(generated<6){
     randNumber = random(26);
     char letter = randNumber + 'a';
     message[generated] = letter;
     generated ++;
  }
  
}
