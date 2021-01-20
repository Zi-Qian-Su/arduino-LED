#define LED_PIN 3 //定義LED PIN為3

void setup() {

  pinMode(LED_PIN, OUTPUT);//設定PIN 3為輸出模式
}
void loop() {

  digitalWrite(LED_PIN, HIGH);//PIN 3輸出為HIGH,LED點亮
  delay(500);//延時500ms
  digitalWrite(LED_PIN, LOW);//PIN 3輸出為LOW,LED熄滅
  delay(500);//延時500ms
}
