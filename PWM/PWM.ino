const int LED_PWM = 9;     // PWM用ピン
const int interval = 10;   // どのくらいの割合で変化させるか
int i = 0;
// 初期起動時処理
void setup() {
    // initialize digital pin LED_BUILTIN as an output.
    pinMode(LED_PWM, OUTPUT);
}
// 起動後処理
void loop() {
    //だんだん明るく
    for (i=0; i<255; i++){
        analogWrite(LED_PWM,i);    // PWMによる出力. i は出力の大きさ
        delay(interval);
}
    //だんだん暗く
    for (i=255; i>0; i--){
        analogWrite(LED_PWM, i);
        delay(interval);
    }
}
