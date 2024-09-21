unsigned int count, toggle;
void setup() {
  pinMode(7, OUTPUT);
  count = 0;
  toggle = 1;
}

void loop() {
  digitalWrite(7, 0);
  delay(1000);
  while (count <=  10) {
    digitalWrite(7, toggle);
    delay(100); //delay를 100 이상으로 주면 5번이 보이는데 100이면 4번처럼 보임..
    count = ++count;
    toggle = (toggle+1)%2;
  }
  while (1) {
    digitalWrite(7, 1);
  }
}
  
