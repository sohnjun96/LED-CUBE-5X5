#define TIME 133
#define SECOND 1000000
int dec05_s03 = 0;
int dec05_s02 = 1;
int dec01_s03 = 2;
int dec01_s02 = 3;
int dec01_s01 = 4;
int dec02_s03 = 5;
int dec02_s02 = 6;
int dec02_s01 = 7;
int dec03_s03 = 8;
int dec03_s02 = 9;
int dec03_s01 = 10;
int dec04_s03 = 11;
int dec04_s02 = 12;
int dec04_s01 = 13;
int MAT[125]= {0,};
int frame = 0;


void setup() 	//Setting Pinmodes
{
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
  digitalWrite(dec05_s02,LOW);
}
void dec03_ON()
{
  digitalWrite(dec05_s02,LOW);
  digitalWrite(dec05_s02,HIGH);
}
void dec04_ON()
{
  digitalWrite(dec05_s02,HIGH);
  digitalWrite(dec05_s02,LOW);
}
void COL_01()
{
  digitalWrite(dec05_s02,HIGH);
  digitalWrite(dec05_s03,HIGH);
}
                                   //Decoder #2 COL_02 ~ COL_09
void COL_02()
{
  dec02_ON();
  digitalWrite(dec02_s01,LOW);
  digitalWrite(dec02_s02,LOW);
  digitalWrite(dec02_s03,LOW);
}
void COL_03()
{
  dec02_ON();
  digitalWrite(dec02_s01,LOW);
  digitalWrite(dec02_s02,LOW);
  digitalWrite(dec02_s03,HIGH);
}
void COL_04()
{
  dec02_ON();
  digitalWrite(dec02_s01,LOW);
  digitalWrite(dec02_s02,HIGH);
  digitalWrite(dec02_s03,LOW);
}void COL_05()
{
  dec02_ON();
  digitalWrite(dec02_s01,LOW);
  digitalWrite(dec02_s02,HIGH);
  digitalWrite(dec02_s03,HIGH);
}void COL_06()
{
  dec02_ON();
  digitalWrite(dec02_s01,HIGH);
  digitalWrite(dec02_s02,LOW);
  digitalWrite(dec02_s03,LOW);
}void COL_07()
{
  dec02_ON();
  digitalWrite(dec02_s01,HIGH);
  digitalWrite(dec02_s02,LOW);
  digitalWrite(dec02_s03,HIGH);
}void COL_08()
{
  dec02_ON();
  digitalWrite(dec02_s01,HIGH);
  digitalWrite(dec02_s02,HIGH);
  digitalWrite(dec02_s03,LOW);
}void COL_09()
{
  dec02_ON();
  digitalWrite(dec02_s01,HIGH);
  digitalWrite(dec02_s02,HIGH);
  digitalWrite(dec02_s03,HIGH);
}
                                //Decoder #3 COL_10 ~ COL_17 
void COL_10()
{
  dec03_ON();
  digitalWrite(dec03_s01,LOW);
  digitalWrite(dec03_s02,LOW);
  digitalWrite(dec03_s03,LOW);
}
void COL_11()
{
  dec03_ON();
  digitalWrite(dec03_s01,LOW);
  digitalWrite(dec03_s02,LOW);
  digitalWrite(dec03_s03,HIGH);
}
void COL_12()
{
  dec03_ON();
  digitalWrite(dec03_s01,LOW);
  digitalWrite(dec03_s02,HIGH);
  digitalWrite(dec03_s03,LOW);
}void COL_13()
{
  dec03_ON();
  digitalWrite(dec03_s01,LOW);
  digitalWrite(dec03_s02,HIGH);
  digitalWrite(dec03_s03,HIGH);
}void COL_14()
{
  dec03_ON();
  digitalWrite(dec03_s01,HIGH);
  digitalWrite(dec03_s02,LOW);
  digitalWrite(dec03_s03,LOW);
}void COL_15()
{
  dec03_ON();
  digitalWrite(dec03_s01,HIGH);
  digitalWrite(dec03_s02,LOW);
  digitalWrite(dec03_s03,HIGH);
}void COL_16()
{
  dec03_ON();
  digitalWrite(dec03_s01,HIGH);
  digitalWrite(dec03_s02,HIGH);
  digitalWrite(dec03_s03,LOW);
}void COL_17()
{
  dec03_ON();
  digitalWrite(dec03_s01,HIGH);
  digitalWrite(dec03_s02,HIGH);
  digitalWrite(dec03_s03,HIGH);
}
                                //Decoder #4 COL_18 ~ COL_25
void COL_18()
{
  dec04_ON();
  digitalWrite(dec04_s01,LOW);
  digitalWrite(dec04_s02,LOW);
  digitalWrite(dec04_s03,LOW);
}
void COL_19()
{
  dec04_ON();
  digitalWrite(dec04_s01,LOW);
  digitalWrite(dec04_s02,LOW);
  digitalWrite(dec04_s03,HIGH);
}
void COL_20()
{
  dec04_ON();
  digitalWrite(dec04_s01,LOW);
  digitalWrite(dec04_s02,HIGH);
  digitalWrite(dec04_s03,LOW);
}void COL_21()
{
  dec04_ON();
  digitalWrite(dec04_s01,LOW);
  digitalWrite(dec04_s02,HIGH);
  digitalWrite(dec04_s03,HIGH);
}void COL_22()
{
  dec04_ON();
  digitalWrite(dec04_s01,HIGH);
  digitalWrite(dec04_s02,LOW);
  digitalWrite(dec04_s03,LOW);
}void COL_23()
{
  dec04_ON();
  digitalWrite(dec04_s01,HIGH);
  digitalWrite(dec04_s02,LOW);
  digitalWrite(dec04_s03,HIGH);
}void COL_24()
{
  dec04_ON();
  digitalWrite(dec04_s01,HIGH);
  digitalWrite(dec04_s02,HIGH);
  digitalWrite(dec04_s03,LOW);
}void COL_25()
{
  dec04_ON();
  digitalWrite(dec04_s01,HIGH);
  digitalWrite(dec04_s02,HIGH);
  digitalWrite(dec04_s03,HIGH);
}

void TurnLED(int*arr,int time);
int ONLED(int*arr);
void loop()
{
  TurnLED(MAT,ONLED(MAT));
  frame++;
}

void TurnLED(int*arr,int time)		//Turn LEDs ON where arr[i] = 1 for time period 
{
	int i,t;
	t=0;
	while(t<time)			//
	{
		for(i=0;i<5;i++)
		{
			switch(i){
			case 0:LAYER01(); break;
			case 1:LAYER02(); break;
			case 2:LAYER03(); break;
			case 3:LAYER04(); break;
			case 4:LAYER05(); break;
			}
			if(*arr++)COL_01();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_02();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_03();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_04();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_05();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_06();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_07();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_08();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_09();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_10();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_11();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_12();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_13();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_14();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_15();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_16();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_17();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_18();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_19();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_20();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_21();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_22();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_23();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_24();delayMicroseconds(TIME);t+=TIME;
			if(*arr++)COL_25();delayMicroseconds(TIME);t+=TIME;
		}
	}
}
int ONLED(int *arr)
{
	int time;
  switch(frame){
  case 0: int mat[125] = {0,}; arr = mat; break; 
  case 1: int mat[125] = {1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1}; arr = mat; break; 
  case 2: int mat[125] = {0,}; arr = mat; break;
  case 3: int mat[125] = {1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1}; arr = mat; break; 
  //모서리
  case 4: int mat[125] = {1,1,1,1,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,1,1,1,1};arr = mat; break;
  //대각선 회전
  case 5: int mat[125] = {1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0};arr = mat; break;
  case 6: int mat[125] = {0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0};arr = mat; break;
  case 7: int mat[125] = {0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0};arr = mat; break;
  case 8: int mat[125] = {0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0};arr = mat; break;
  case 9: int mat[125] = {0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1};arr = mat; break;
  case 10: int mat[125] = {0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0};arr = mat; break;
  case 11: int mat[125] = {0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0};arr = mat; break;
  case 12: int mat[125] = {0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0};arr = mat; break;
  //상승
  case 13: int mat[125] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};arr = mat; break;
  case 14: int mat[125] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};arr = mat; break;
  case 15: int mat[125] = {};arr = mat; break;
  case 16: int mat[125] = {};arr = mat; break;
  case 17: int mat[125] = {};arr = mat; break;
  case 18: int mat[125] = {};arr = mat; break;
  case 19: int mat[125] = {};arr = mat; break;
  case 20: int mat[125] = {};arr = mat; break;
  case 21: int mat[125] = {};arr = mat; break;
  case 22: int mat[125] = {};arr = mat; break;
  case 23: int mat[125] = {};arr = mat; break;
  case 24: int mat[125] = {};arr = mat; break;
  case 25: int mat[125] = {};arr = mat; break;
  }
	return time;
}
