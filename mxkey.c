#include <regx52.h>
#include "dk.h"
unsigned char mxkey()
{
	unsigned char KeyNum=0;
	P1=0xFF;
	P1_7=0;
	if(P1_3==0){delay(20);while(P1_3==0);delay(20);KeyNum=1;}
	if(P1_2==0){delay(20);while(P1_2==0);delay(20);KeyNum=2;}
	if(P1_1==0){delay(20);while(P1_1==0);delay(20);KeyNum=3;}
	if(P1_0==0){delay(20);while(P1_0==0);delay(20);KeyNum=4;}
	P1=0xFF;
	P1_6=0;
	if(P1_3==0){delay(20);while(P1_3==0);delay(20);KeyNum=5;}
	if(P1_2==0){delay(20);while(P1_2==0);delay(20);KeyNum=6;}
	if(P1_1==0){delay(20);while(P1_1==0);delay(20);KeyNum=7;}
	if(P1_0==0){delay(20);while(P1_0==0);delay(20);KeyNum=8;}
	P1=0xFF;
	P1_5=0;
	if(P1_3==0){delay(20);while(P1_3==0);delay(20);KeyNum=9;}
	if(P1_2==0){delay(20);while(P1_2==0);delay(20);KeyNum=10;}
	if(P1_1==0){delay(20);while(P1_1==0);delay(20);KeyNum=11;}
	if(P1_0==0){delay(20);while(P1_0==0);delay(20);KeyNum=12;}
	P1=0xFF;
	P1_4=0;
	if(P1_3==0){delay(20);while(P1_3==0);delay(20);KeyNum=13;}
	if(P1_2==0){delay(20);while(P1_2==0);delay(20);KeyNum=14;}
	if(P1_1==0){delay(20);while(P1_1==0);delay(20);KeyNum=15;}
	if(P1_0==0){delay(20);while(P1_0==0);delay(20);KeyNum=16;}

	return KeyNum;
}