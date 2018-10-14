int led_01 = 0;
int g1 = 1;
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

void setup() //
{
  pinMode(led_01, OUTPUT);
  pinMode(g1, OUTPUT);
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
//PORT 00
void COL_01()
{
  digitalWrite(led_01,HIGH);
}
                                   //Decoder #2 COL_02 ~ COL_09
void COL_02()
{
  digitalWrite(dec02_s01,LOW);
  digitalWrite(dec02_s02,LOW);
  digitalWrite(dec02_s03,LOW);
}
void COL_03()
{
  digitalWrite(dec02_s01,LOW);
  digitalWrite(dec02_s02,LOW);
  digitalWrite(dec02_s03,HIGH);
}
void COL_04()
{
  digitalWrite(dec02_s01,LOW);
  digitalWrite(dec02_s02,HIGH);
  digitalWrite(dec02_s03,LOW);
}void COL_05()
{
  digitalWrite(dec02_s01,LOW);
  digitalWrite(dec02_s02,HIGH);
  digitalWrite(dec02_s03,HIGH);
}void COL_06()
{
  digitalWrite(dec02_s01,HIGH);
  digitalWrite(dec02_s02,LOW);
  digitalWrite(dec02_s03,LOW);
}void COL_07()
{
  digitalWrite(dec02_s01,HIGH);
  digitalWrite(dec02_s02,LOW);
  digitalWrite(dec02_s03,HIGH);
}void COL_08()
{
  digitalWrite(dec02_s01,HIGH);
  digitalWrite(dec02_s02,HIGH);
  digitalWrite(dec02_s03,LOW);
}void COL_09()
{
  digitalWrite(dec02_s01,HIGH);
  digitalWrite(dec02_s02,HIGH);
  digitalWrite(dec02_s03,HIGH);
}
                                //Decoder #3 COL_10 ~ COL_17 
void COL_10()
{
  digitalWrite(dec03_s01,LOW);
  digitalWrite(dec03_s02,LOW);
  digitalWrite(dec03_s03,LOW);
}
void COL_11()
{
  digitalWrite(dec03_s01,LOW);
  digitalWrite(dec03_s02,LOW);
  digitalWrite(dec03_s03,HIGH);
}
void COL_12()
{
  digitalWrite(dec03_s01,LOW);
  digitalWrite(dec03_s02,HIGH);
  digitalWrite(dec03_s03,LOW);
}void COL_13()
{
  digitalWrite(dec03_s01,LOW);
  digitalWrite(dec03_s02,HIGH);
  digitalWrite(dec03_s03,HIGH);
}void COL_14()
{
  digitalWrite(dec03_s01,HIGH);
  digitalWrite(dec03_s02,LOW);
  digitalWrite(dec03_s03,LOW);
}void COL_15()
{
  digitalWrite(dec03_s01,HIGH);
  digitalWrite(dec03_s02,LOW);
  digitalWrite(dec03_s03,HIGH);
}void COL_16()
{
  digitalWrite(dec03_s01,HIGH);
  digitalWrite(dec03_s02,HIGH);
  digitalWrite(dec03_s03,LOW);
}void COL_17()
{
  digitalWrite(dec03_s01,HIGH);
  digitalWrite(dec03_s02,HIGH);
  digitalWrite(dec03_s03,HIGH);
}
                                //Decoder #4 COL_18 ~ COL_25
void COL_18()
{
  digitalWrite(dec04_s01,LOW);
  digitalWrite(dec04_s02,LOW);
  digitalWrite(dec04_s03,LOW);
}
void COL_19()
{
  digitalWrite(dec04_s01,LOW);
  digitalWrite(dec04_s02,LOW);
  digitalWrite(dec04_s03,HIGH);
}
void COL_20()
{
  digitalWrite(dec04_s01,LOW);
  digitalWrite(dec04_s02,HIGH);
  digitalWrite(dec04_s03,LOW);
}void COL_21()
{
  digitalWrite(dec04_s01,LOW);
  digitalWrite(dec04_s02,HIGH);
  digitalWrite(dec04_s03,HIGH);
}void COL_22()
{
  digitalWrite(dec04_s01,HIGH);
  digitalWrite(dec04_s02,LOW);
  digitalWrite(dec04_s03,LOW);
}void COL_23()
{
  digitalWrite(dec04_s01,HIGH);
  digitalWrite(dec04_s02,LOW);
  digitalWrite(dec04_s03,HIGH);
}void COL_24()
{
  digitalWrite(dec04_s01,HIGH);
  digitalWrite(dec04_s02,HIGH);
  digitalWrite(dec04_s03,LOW);
}void COL_25()
{
  digitalWrite(dec04_s01,HIGH);
  digitalWrite(dec04_s02,HIGH);
  digitalWrite(dec04_s03,HIGH);
}

void loop()
{
  
}
