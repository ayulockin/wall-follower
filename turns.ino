void straight(){
  analogWrite(lm1,100);
  analogWrite(lm2,0);
  analogWrite(rm1,100);
  analogWrite(rm2,0);
}

void sharp_left_turn(){ 
  analogWrite(lm1,0);
  analogWrite(lm2,90);
  analogWrite(rm1,90);
  analogWrite(rm2,0);  
}

void sharp_right_turn(){
  analogWrite(lm1,90);//90->90->140
  analogWrite(lm2,0);
  analogWrite(rm1,0);
  analogWrite(rm2,90);  
}

void left_turn(){ 
  analogWrite(lm1,0);
  analogWrite(lm2,70);
  analogWrite(rm1,70);
  analogWrite(rm2,0);  
}

void right_turn(){
  analogWrite(lm1,70);//90->90->140
  analogWrite(lm2,0);
  analogWrite(rm1,0);
  analogWrite(rm2,70);  
}

void sharp_accute_left_turn(){
  analogWrite(lm1,0);
  analogWrite(lm2,90);
  analogWrite(rm1,90);
  analogWrite(rm2,0);  
}

void sharp_accute_right_turn(){
  analogWrite(lm1,90);
  analogWrite(lm2,0);
  analogWrite(rm1,0);
  analogWrite(rm2,90);  
}


void brake(){
  analogWrite(lm1,255);
  analogWrite(lm2,255);
  analogWrite(rm1,255);
  analogWrite(rm2,255); 
}



void w_sharp_left_turn(){ 
  analogWrite(lm1,0);
  analogWrite(lm2,70);
  analogWrite(rm1,70);
  analogWrite(rm2,0);  
}

void w_sharp_right_turn(){
  analogWrite(lm1,70);//90->90->140
  analogWrite(lm2,0);
  analogWrite(rm1,0);
  analogWrite(rm2,70);  
}
