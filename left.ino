void w_left() {
  wall_readsensors();
  while (!(wall > 800 && wall < 900)) {
    sharp_right_turn();
    wall_readsensors();
  }
}


