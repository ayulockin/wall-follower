#define lc 0 // black 
#define sc 1 //white

/////////////motor pinout/////////////////

#define lm1 3 
#define lm2 5
#define rm1 6
#define rm2 9 

int s1,s2,s3,s4,s5,s6,s7,s8;//sensor array

int wall;

/////////////pid parameters////////////////

float error = 0;
float prev_error = 0;
float Kp = 37.5;
float Kd = 75;  //100/150   //40, 70
float P = 0;
float D = 0;
float pd = 0;

int lms,rms; 
int bs = 130;  

int left_max = 180;
int right_max = 182; //based on motor speed diff
int left_min = 0;
int right_min = 0;

///////////////sharp turn parameters///////////////

int left=0,right=0;
int leftthres = 400;    //150
int rightthres = 400;   //150 

int leftacutethres = 700;
int rightacutethres = 700;


/////////////brake parameters///////////////

int brake_count = 0;
int brake_thres = 300;

////////wall/////////////

int state=0;

int wall_thres=600;

///////////////wall pid////////////////

float wall_error = 0;
float wall_prev_error = 0;
float wall_Kp = 60;
float wall_Kd = 0;  //100/150   //40, 70
float wall_pd = 0;

int wall_lms,wall_rms; 
int wall_bs = 90;

int wall_left_max = 90;
int wall_right_max = 90; //based on motor speed diff
int wall_left_min = 0;
int wall_right_min = 0;

int flag=0;
