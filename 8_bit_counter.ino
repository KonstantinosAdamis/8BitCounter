int ledPin[] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i <= 7; i++){
    pinMode(ledPin[i], OUTPUT);
  } 
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int j = 0; j <= 255; j++){
    binaryDisplay(j);
    delay(1000);
  }
}

void binaryDisplay(byte numToShow){
  for (int k = 0; k <= 7; k++){
    if (bitRead(numToShow, k) == 1){
      digitalWrite(ledPin[k], HIGH);
    }
    else{
      digitalWrite(ledPin[k], LOW);
    }
  }
}