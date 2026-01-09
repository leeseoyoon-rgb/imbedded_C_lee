#include "robot_logic.h"

// 장애물 판단 기준(25cm 이하면 장애물로 판단)
Action decide_action_cm(int distance_cm) {
    const int THRESHOLD = 25;

    // 이상한 값 들어오면 안전하게 정지
    if (distance_cm < 0) {
        return ACT_STOP;
    }

    // 기준보다 멀면 전진
    if (distance_cm > THRESHOLD) {
        return ACT_FORWARD;
    }
    else {
        // 가까우면 회피(일단 좌회전)
        return ACT_TURN_LEFT;
    }
}

// Action을 문자열로 바꿔주는 함수 (출력용)
const char* action_to_string(Action a) {
    switch (a) {
    case ACT_FORWARD:   return "FORWARD";
    case ACT_STOP:      return "STOP";
    case ACT_TURN_LEFT: return "TURN_LEFT";
    case ACT_TURN_RIGHT:return "TURN_RIGHT";
    default:            return "UNKNOWN";
    }
}
