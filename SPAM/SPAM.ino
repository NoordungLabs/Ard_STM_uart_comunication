  int upperlim = 990;
  int lowerlim = 110;
  float signal = 750;
  int korak = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.print("SPAM.ino\r\n");
  Serial.print(signal, HEX);
  Serial.print("\r\n");
  delay(100);
  Serial.write(signal)
  



  if (signal > upperlim){
    signal = signal + random(-korak, 0);
  }else if(signal < lowerlim){
    signal = signal + random(0, korak);
  }else{
    signal = signal + random(-korak, korak);
  }
}


