void wall_follow() {
  wall_readsensors();
  wall_error_map();

  if(wall>800 && wall<900){
    straight();
    }
    if(wall<800 && wall>750){
    right_turn();
    }
    if(wall<750 && wall>700){
    sharp_right_turn();
    }
    if(wall>900 && wall<950){
    left_turn();
    }
    if(wall>950 && wall<1000){
    sharp_left_turn();
    }
  if ((s1 == lc) || (s2 == lc) || (s3 == lc) || (s4 == lc)  || (s5 == lc) || (s6 == lc) || (s7 == lc) || (s8 == lc)) {
    flag = 0;
  }
}
