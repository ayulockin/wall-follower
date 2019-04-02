void line_follow() {
  readsensors();
  error_map();

  if (s1 == lc) {
    left = 0;
  }
  if (s8 == lc) {
    right = 0;
  }
  if((s2==lc)&&(s7==lc)){     //intersection blink
     digitalWrite(LED_BUILTIN,HIGH);
  }
  else{
     digitalWrite(LED_BUILTIN,LOW);
  }
  

  if (left == 0 && right == 0) { //for braking
    if (brake_count > 15000) {
      brake_count = 15000;
    }
    brake_count++;
  }
  else {
    brake_count = 0;
  }

  if ((s1 != lc) && (s2 != lc) && (s3 != lc) && (s4 != lc) && (s5 != lc) && (s6 != lc) && (s7 != lc) && (s8 != lc)) {

    if ((left > leftthres) && (right < rightthres)) { //right sharp turns
      brake();
      //delay(5);
      readsensors();
      while ((s4 != lc) && (s5 != lc)) {
        sharp_right_turn();
        readsensors();
      }
      brake();
      //delay(10);
      //left = 1000;
      //right = 1000;
    }
    else if ((left < leftthres) && (right > rightthres)) { //left sharp turn
      brake();
      //delay(5);
      readsensors();
      while ((s4 != lc) && (s5 != lc)) {
        sharp_left_turn();
        readsensors();
      }
      brake();
      //left = 1000;
      //right = 1000;

    }
    else if(left>970 && right>970){
      brake();
      delay(100);
      flag=1;
    }
  }
  else if ((s1 == lc) && (s2 == lc) && (s3 == lc) && (s4 == lc) && (s5 == lc) && (s6 == lc) && (s7 == lc) && (s8 == lc)) {
    if (brake_count > brake_thres) {
      brake();
      delay(10000);
    }
  }

  pid();

  left = left + 1;
  right = right + 1;
  if (left > 20000) { //20000
    left = 1000;
  }
  if (right > 20000) {
    right = 1000;
  }
}
