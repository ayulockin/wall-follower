void wall_pid(){
  wall_readsensors();
  wall_error_map();

  wall_pd = wall_Kp*error + wall_Kd*(wall_error - wall_prev_error);
 
  wall_lms = wall_bs + wall_pd; 
  wall_rms = wall_bs - wall_pd;

  if(wall_lms>=wall_left_max)
  {
   wall_lms=wall_left_max;
  }
 
  else if(wall_lms<=wall_left_min)
  {
   wall_lms=wall_left_min;
  }
   
  if(wall_rms>=wall_right_max)
  {
   wall_rms=wall_right_max;
  }
  
  else if(wall_rms<=wall_right_min)
  {
   wall_rms=wall_right_min;
  }

  analogWrite(lm1,wall_lms+2);
  analogWrite(lm2,0);
  analogWrite(rm1,wall_rms);
  analogWrite(rm2,0);
 
  wall_prev_error = wall_error;

}
