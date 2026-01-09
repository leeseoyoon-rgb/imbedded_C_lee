#ifndef ROBOT_LOGIC_H
#define ROBOT_LOGIC_H

// 로봇이 할 수 있는 행동 종류
typedef enum {
    ACT_FORWARD,     // 전진
    ACT_STOP,        // 정지
    ACT_TURN_LEFT,   // 좌회전
    ACT_TURN_RIGHT   // 우회전
} Action;

// 거리(cm)를 입력받아 행동을 결정
Action decide_action_cm(int distance_cm);

// Action을 사람이 읽기 좋은 문자열로 변환
const char* action_to_string(Action a);

#endif
