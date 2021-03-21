#include<NewPing.h>
#define rt 11
#define lt 13
#define ft 2
#define mx 450
#define sv1 300
#define kp 20 
#define kd 15
#define ki 0
#define ofst 60

NewPing a(lt, lt, mx);
NewPing b(rt, rt, mx);
NewPing c(ft, ft, mx);

int err=0,perr=0,i=0; //error ,previous error ,sum of errors                  
float pwm = 0;//error added to motors
//#define sp 125 //base pwm

int l, r, f, mlb = 6, mlf = 5, mrb = 9, mrf = 10;



class pos
{
  public:
    short int x, y, i;
    char d[4] = {'n', 'e', 's', 'w'};

    pos()
    {
      x = y = i = 0;
    }

};


pos *dir = new pos();

void fwd();
void rev();
void left();
void right();
void stopp();
void dist();
void go();

float ld, rd, fd, la, ra, fa;
float sp =331.4 + 0.606*26 + 0.0124*50;
int pl, pr, ctr;



//-------------------------------------
void setup() {
  pinMode(mlf, OUTPUT);
  pinMode(mlb, OUTPUT);
  pinMode(mrb, OUTPUT);
  pinMode(mrf, OUTPUT);
  Serial.begin(9600);
  ctr = 0;
  la = 0;
  ra = 0;
  fa = 0;
}

void loop() {
    dist();
   // fwd();
    if(ra<=300)
    {
    analogWrite(mlf, 125 - ofst);
  analogWrite(mlb, 0);
  analogWrite(mrf, 125);
  analogWrite(mrb, 0);
    }
    else if(ra>300)
    {
//      Serial.print("F");
    analogWrite(mlf, 125 + ofst);
  analogWrite(mlb, 0);
  analogWrite(mrf, 125);
  analogWrite(mrb, 0);
    }
    else
    {
      analogWrite(mlf, 125);
  analogWrite(mlb, 0);
  analogWrite(mrf, 125);
  analogWrite(mrb, 0);
      }
}
