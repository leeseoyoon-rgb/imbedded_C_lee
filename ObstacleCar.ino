#include "robot_logic.h"

void setup() {
  Serial.begin(9600);   // PC의 printf 시작 준비 같은 거
}

void loop() {
  int distance_cm = 20; //  지금은 아두이노가 없으니 "임시 입력값"
  
  //  이 줄이 너의 핵심 로직 (그대로 사용)
  Action act = decide_action_cm(distance_cm);

  // PC의 printf 대신 (시리얼로 출력)
  Serial.print("distance(cm) = ");
  Serial.print(distance_cm);
  Serial.print(" -> Action: ");
  Serial.println(action_to_string(act));

  delay(1000); // 1초마다 한 번씩
}
