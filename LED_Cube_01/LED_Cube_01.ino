#define TIME 20
#include <stdlib.h>
#define SECOND 1000000
int dec05_s02 = 0;
int dec05_s03 = 1;
int dec01_s01 = 2;
int dec01_s02 = 3;
int dec01_s03 = 4;
int dec02_s01 = 5;
int dec02_s02 = 6;
int dec02_s03 = 7;
int dec03_s01 = 8;
int dec03_s02 = 9;
int dec03_s03 = 10;
int dec04_s01 = 11;
int dec04_s02 = 12;
int dec04_s03 = 13;


void setup() 	//Setting Pinmodes
{
  int i;
  
  pinMode(dec01_s03, OUTPUT);
  pinMode(dec01_s02, OUTPUT);
  pinMode(dec01_s01, OUTPUT);
  pinMode(dec02_s03, OUTPUT);
  pinMode(dec02_s02, OUTPUT);
  pinMode(dec02_s01, OUTPUT);
  pinMode(dec03_s03, OUTPUT);
  pinMode(dec03_s02, OUTPUT);
  pinMode(dec03_s01, OUTPUT);
  pinMode(dec04_s03, OUTPUT);
  pinMode(dec04_s02, OUTPUT);
  pinMode(dec04_s01, OUTPUT);
  pinMode(dec05_s03, OUTPUT);
  pinMode(dec05_s02, OUTPUT);
  
}
                                //Decoder #1 LAYER Selection
void LAYER01()
{
  digitalWrite(dec01_s01,LOW);
  digitalWrite(dec01_s02,LOW);
  digitalWrite(dec01_s03,LOW);
}
void LAYER02()
{
  digitalWrite(dec01_s01,LOW);
  digitalWrite(dec01_s02,LOW);
  digitalWrite(dec01_s03,HIGH);
}
void LAYER03()
{
  digitalWrite(dec01_s01,LOW);
  digitalWrite(dec01_s02,HIGH);
  digitalWrite(dec01_s03,LOW);
}
void LAYER04()
{
  digitalWrite(dec01_s01,LOW);
  digitalWrite(dec01_s02,HIGH);
  digitalWrite(dec01_s03,HIGH);
}
void LAYER05()
{
  digitalWrite(dec01_s01,HIGH);
  digitalWrite(dec01_s02,LOW);
  digitalWrite(dec01_s03,LOW);
}
//PORT 00,01 => 2X4 Decoder05
void dec02_ON()
{
  digitalWrite(dec05_s02,LOW);
  digitalWrite(dec05_s03,LOW);
}
void dec03_ON()
{
  digitalWrite(dec05_s02,HIGH);
  digitalWrite(dec05_s03,LOW);
}
void dec04_ON()
{
  digitalWrite(dec05_s02,LOW);
  digitalWrite(dec05_s03,HIGH);
}
void COL_25()
{
  digitalWrite(dec05_s02,HIGH);
  digitalWrite(dec05_s03,HIGH);
}
                                   //Decoder #2 COL_02 ~ COL_09
void COL_01()
{
  dec02_ON();
  digitalWrite(dec02_s01,LOW);
  digitalWrite(dec02_s02,LOW);
  digitalWrite(dec02_s03,LOW);
}
void COL_02()
{
  dec02_ON();
  digitalWrite(dec02_s01,LOW);
  digitalWrite(dec02_s02,LOW);
  digitalWrite(dec02_s03,HIGH);
}
void COL_03()
{
  dec02_ON();
  digitalWrite(dec02_s01,LOW);
  digitalWrite(dec02_s02,HIGH);
  digitalWrite(dec02_s03,LOW);
}void COL_04()
{
  dec02_ON();
  digitalWrite(dec02_s01,LOW);
  digitalWrite(dec02_s02,HIGH);
  digitalWrite(dec02_s03,HIGH);
}void COL_05()
{
  dec02_ON();
  digitalWrite(dec02_s01,HIGH);
  digitalWrite(dec02_s02,LOW);
  digitalWrite(dec02_s03,LOW);
}void COL_06()
{
  dec02_ON();
  digitalWrite(dec02_s01,HIGH);
  digitalWrite(dec02_s02,LOW);
  digitalWrite(dec02_s03,HIGH);
}void COL_07()
{
  dec02_ON();
  digitalWrite(dec02_s01,HIGH);
  digitalWrite(dec02_s02,HIGH);
  digitalWrite(dec02_s03,LOW);
}void COL_08()
{
  dec02_ON();
  digitalWrite(dec02_s01,HIGH);
  digitalWrite(dec02_s02,HIGH);
  digitalWrite(dec02_s03,HIGH);
}
                                //Decoder #3 COL_10 ~ COL_17 
void COL_09()
{
  dec03_ON();
  digitalWrite(dec03_s01,LOW);
  digitalWrite(dec03_s02,LOW);
  digitalWrite(dec03_s03,LOW);
}
void COL_10()
{
  dec03_ON();
  digitalWrite(dec03_s01,LOW);
  digitalWrite(dec03_s02,LOW);
  digitalWrite(dec03_s03,HIGH);
}
void COL_11()
{
  dec03_ON();
  digitalWrite(dec03_s01,LOW);
  digitalWrite(dec03_s02,HIGH);
  digitalWrite(dec03_s03,LOW);
}void COL_12()
{
  dec03_ON();
  digitalWrite(dec03_s01,LOW);
  digitalWrite(dec03_s02,HIGH);
  digitalWrite(dec03_s03,HIGH);
}void COL_13()
{
  dec03_ON();
  digitalWrite(dec03_s01,HIGH);
  digitalWrite(dec03_s02,LOW);
  digitalWrite(dec03_s03,LOW);
}void COL_14()
{
  dec03_ON();
  digitalWrite(dec03_s01,HIGH);
  digitalWrite(dec03_s02,LOW);
  digitalWrite(dec03_s03,HIGH);
}void COL_15()
{
  dec03_ON();
  digitalWrite(dec03_s01,HIGH);
  digitalWrite(dec03_s02,HIGH);
  digitalWrite(dec03_s03,LOW);
}void COL_16()
{
  dec03_ON();
  digitalWrite(dec03_s01,HIGH);
  digitalWrite(dec03_s02,HIGH);
  digitalWrite(dec03_s03,HIGH);
}
                                //Decoder #4 COL_18 ~ COL_25
void COL_17()
{
  dec04_ON();
  digitalWrite(dec04_s01,LOW);
  digitalWrite(dec04_s02,LOW);
  digitalWrite(dec04_s03,LOW);
}
void COL_18()
{
  dec04_ON();
  digitalWrite(dec04_s01,LOW);
  digitalWrite(dec04_s02,LOW);
  digitalWrite(dec04_s03,HIGH);
}
void COL_19()
{
  dec04_ON();
  digitalWrite(dec04_s01,LOW);
  digitalWrite(dec04_s02,HIGH);
  digitalWrite(dec04_s03,LOW);
}void COL_20()
{
  dec04_ON();
  digitalWrite(dec04_s01,LOW);
  digitalWrite(dec04_s02,HIGH);
  digitalWrite(dec04_s03,HIGH);
}void COL_21()
{
  dec04_ON();
  digitalWrite(dec04_s01,HIGH);
  digitalWrite(dec04_s02,LOW);
  digitalWrite(dec04_s03,LOW);
}void COL_22()
{
  dec04_ON();
  digitalWrite(dec04_s01,HIGH);
  digitalWrite(dec04_s02,LOW);
  digitalWrite(dec04_s03,HIGH);
}void COL_23()
{
  dec04_ON();
  digitalWrite(dec04_s01,HIGH);
  digitalWrite(dec04_s02,HIGH);
  digitalWrite(dec04_s03,LOW);
}void COL_24()
{
  dec04_ON();
  digitalWrite(dec04_s01,HIGH);
  digitalWrite(dec04_s02,HIGH);
  digitalWrite(dec04_s03,HIGH);
}

void TurnLED(short *arr,long time);
void MAT_ROTATION(int frame,long time);
void MAT_DUCK(int frame, long time);
void MAT_CUBE(int frame,long time);
void MAT_SPARKLE(int frame,long time);
void MAT_YSE(int frame,long time);
void MAT_HEARTSTAR(int frame,long time);
void MAT_PLATE(int frame,long time);
void MAT_GOINGUP(int frame, long time);
/////////////////////////////////////////////////////////
void loop()
{
  int i=0;
  
  for(i=0;i<3;i++)
  {
    MAT_CUBE(i,SECOND/4);
  }
  for(i=1;i>=0;i--)
  {
    MAT_CUBE(i,SECOND/3);
  }
  for(i=0;i<30;i++)
  {
    MAT_SPARKLE(i%2,SECOND/10);
  }
  for(i=0;i<6;i++)
  {
   // MAT_DUCK(i%2,SECOND/10);
  }
  
  for(i=0;i<5;i++)
   MAT_PLATE(i,SECOND/10);
  for(i=3;i>=0;i--)
    MAT_PLATE(i,SECOND/10);
  for(i=0;i<7;i++)
    MAT_GOINGUP(i,SECOND/10);
  for(i=6;i>=0;i--)
    MAT_GOINGUP(i,SECOND/10);
  for(i=0;i<32;i++)
    MAT_ROTATION(i%8,SECOND/10);
}
////////////////////////////////////////////////////
void TurnLED(short*arr,long time)		//Turn LEDs ON where arr[i] = 1 for time period 
{
	int i;
	long t = 0;
  while(t < time){
		for(i=0;i<5;i++)
		{
			if(i==0)
      LAYER01();
      else if(i==1)
      LAYER02();
      else if(i==2)
      LAYER03();
      else if(i==3)
      LAYER04();
      else if(i==4)
      LAYER05();
			if(*arr+i*25)COL_01();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+1+i*25))COL_02();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+2+i*25))COL_03();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+3+i*25))COL_04();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+4+i*25))COL_05();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+5+i*25))COL_06();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+6+i*25))COL_07();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+7+i*25))COL_08();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+8+i*25))COL_09();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+9+i*25))COL_10();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+10+i*25))COL_11();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+11+i*25))COL_12();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+12+i*25))COL_13();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+13+i*25))COL_14();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+14+i*25))COL_15();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+15+i*25))COL_16();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+16+i*25))COL_17();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+17+i*25))COL_18();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+18+i*25))COL_19();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+19+i*25))COL_20();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+20+i*25))COL_21();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+21+i*25))COL_22();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+22+i*25))COL_23();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+23+i*25))COL_24();delayMicroseconds(TIME);t+=TIME;
			if(*(arr+24+i*25))COL_25();delayMicroseconds(TIME);t+=TIME;
		}
  }
}

void MAT_ROTATION(int frame,long time)
{
  short mat0[125] = {0,};
  short mat1[125] = {1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1};
    //대각선 회전
  short mat5[125] = {1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0};
  short mat6[125] = {0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0};
  short mat7[125] = {0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0};
  short mat8[125] = {0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0};
  short mat9[125] = {0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1};
  short mat10[125] = {0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0};
  short mat11[125] = {0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0};
  short mat12[125] = {0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0};
  
  switch(frame){
    case 0:TurnLED(mat5,time);break;
    case 1:TurnLED(mat6,time);break;
    case 2:TurnLED(mat7,time);break;
    case 3:TurnLED(mat8,time);break;
    case 4:TurnLED(mat9,time);break;
    case 5:TurnLED(mat10,time);break;
    case 6:TurnLED(mat11,time);break;
    case 7:TurnLED(mat12,time);break;
  }
}
void MAT_DUCK(int frame,long time)
{
  short mat1[125] = {0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0};
  short mat2[125] = {0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,0,0,1,1,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0};
  TurnLED(mat1,time);
  TurnLED(mat2,time);
}
void MAT_CUBE(int frame,long time)
{
  short mat1[125] = {1,1,1,1,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,1,1,1,1};
  short mat2[125] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,1,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,0,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,1,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  short mat3[125] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  switch(frame){
    case 0:TurnLED(mat1,time);break;
    case 1:TurnLED(mat2,time);break;
    case 2:TurnLED(mat3,time);break;
  }
}
void MAT_SPARKLE(int frame,long time)
{
  short mat1[125] = {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
  short mat2[125] = {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0};
  switch(frame){
    case 0:TurnLED(mat1,time);break;
    case 1:TurnLED(mat2,time);break;
  }
}
void MAT_YSE(int frame,long time)
{
  short mat[125] = {0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1};
  short mat2[125] = {0,0,0,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1};
  TurnLED(mat2,time);
  
}
void MAT_HEARTSTAR(int frame,long time)
{
  short mat1[125] = {1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0};
  short mat2[125] = {0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,1,1,1,0,0,1,1,1,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0};
  short mat3[125] = {0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,1,0,0,0,0,1,1,1,0,0,0,0,1,1,1,0,0,0,0,1,1,0,0,0,1,1,0,0,0,0,1,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0};
  short mat4[125] = {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,1,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0};
  short mat5[125] = {0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,0,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0};
  short mat6[125] = {0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,1,0,0,0,1,1,0,0,0,1,0,0,0,0,1,1,1,0,0,0,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0};
  short mat7[125] = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,1,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,1,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0,1,1,1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1};
  short mat8[125] = {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0};
  //short mat9[125] = {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0};
  switch(frame){
    case 0:TurnLED(mat1,time);break;
    case 1:TurnLED(mat2,time);break;
    case 2:TurnLED(mat3,time);break;
    case 3:TurnLED(mat4,time);break;
    case 4:TurnLED(mat5,time);break;
    case 5:TurnLED(mat6,time);break;
    case 6:TurnLED(mat7,time);break;
    case 7:TurnLED(mat8,time);break;
    //case 8:TurnLED(mat9,time);break;
  }
}
void MAT_PLATE(int frame,long time)
{
  short mat1[125] = {1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  short mat2[125] = {0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  short mat3[125] = {0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0};
  short mat4[125] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0};
  short mat5[125] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1};
  switch(frame){
    case 0:TurnLED(mat1,time);break;
    case 1:TurnLED(mat2,time);break;
    case 2:TurnLED(mat3,time);break;
    case 3:TurnLED(mat4,time);break;
    case 4:TurnLED(mat5,time);break;
  }
}

void MAT_GOINGUP(int frame, long time)
{
  short mat1[125] = {0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  short mat2[125] = {0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  short mat3[125] = {0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  short mat4[125] = {1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  short mat5[125] = {1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0};
  short mat6[125] = {0,1,0,1,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0};
  short mat7[125] = {0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0};
  switch(frame){
    case 0:TurnLED(mat1,time);break;
    case 1:TurnLED(mat2,time);break;
    case 2:TurnLED(mat3,time);break;
    case 3:TurnLED(mat4,time);break;
    case 4:TurnLED(mat5,time);break;
    case 5:TurnLED(mat6,time);break;
    case 6:TurnLED(mat7,time);break;
  }
}
