// 初期起動時に設定する項目を書く
const int LED_PIN = 13; //loopでも使う変数(グローバル変数)は外
void setup() {
 // LEDの13番ピンを出力先として指定
 pinMode(LED_PIN, OUTPUT); 
}
// 起動後ずっと動く関数
void loop() {
 int interval = 300; //ミリ秒
 digitalWrite(LED_PIN, HIGH);   // LEDを光らせる(電圧がHIGH)
 delay(interval);               // 指定した時間、何もしない
 digitalWrite(LED_PIN, LOW);   // LEDを光らせる(電圧がLOW)
 delay(interval);     // 指定した時間、何もしない
}
