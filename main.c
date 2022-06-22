#include "mxkey.h"
#include <regx52.h>
#include "dk.h"
#include "LCD1602.h"
#include <dk.h>
#define k1 P3_1
#define k2 P3_0
#define k3 P3_2
#define k4 P3_3
unsigned int count,n1,n2,n3,n4,kn,pw;
void main()
{
	Timer0_Init();
	while(1)
	{
		Nt(4,n1);
		Nt(3,n2);
		Nt(2,n3);
		Nt(1,n4);
		if(k1==0)		
		{
			delay(20);
			while(k1==0);
			delay(20);
			n1--;
		}
		if(k2==0)		
		{
			delay(20);
			while(k2==0);
			delay(20);
			n1++;
		}
		if(k3==0)		
		{
			delay(20);
			while(k3==0);
			delay(20);
			n1=~n1;
		}
		kn=mxkey();
		switch(kn)
		{
			case 1:n2+=1;break;
			case 2:n3+=1;break;
			case 3:n4+=1;break;
			case 4:n1=n2=n3=n4=0;break;
		}

	}
}

void Timer0_Routine() interrupt 1
{
	TH0=64535/256;
	TL0=64535%256;
	count++;
	if(count>+1000)
	{
		count=0;
		Nt(4,n1++);
		Nt(3,n2);
		Nt(2,n3);
		Nt(1,n4);
	}
		while (n1 == 9)
		{
			n1 = 0;
			n2++;
		}
		while (n2 == 9)
		{
			n2 = 0;
			n3++;
		}
		while (n3 == 9)
		{
			n3 = 0;
			n4++;
		}
}
