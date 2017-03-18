
//SOS

void morse_s (){
  on_off(250);
  on_off(250);
  on_off(250);
}

void morse_o (){
  on_off(500);
  on_off(500);
  on_off(500);
}

void on_off (int interval){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(interval);
  digitalWrite(LED_BUILTIN, LOW);
  delay(interval);
}

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  morse_s();
  morse_o();
  morse_s();
  delay(2000);

}


