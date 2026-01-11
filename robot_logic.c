#include "robot_logic.h"


Action decide_action_cm(int distance_cm) {
    const int THRESHOLD = 25;


    if (distance_cm < 0)  return ACT_STOP;
  
    if (distance_cm > THRESHOLD) return ACT_FORWARD;
    else return ACT_TURN_LEFT;
    
}


const char* action_to_string(Action a) {
    switch (a) {
    case ACT_FORWARD:   return "FORWARD";
    case ACT_STOP:      return "STOP";
    case ACT_TURN_LEFT: return "TURN_LEFT";
    case ACT_TURN_RIGHT:return "TURN_RIGHT";
    default:            return "UNKNOWN";
    }
}
