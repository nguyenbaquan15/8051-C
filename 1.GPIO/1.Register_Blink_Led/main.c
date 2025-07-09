#include<stdio.h>
#include<stdlib.h>

// Define register
sfr LED = 0x90;
sfr SW = 0x0B0;

void delay_ms(unsigned int t);


void main()
{
	char status;

	while(1)
	{
        // Check pin P3.5
		if((SW&(1<<5))==0)
		{
			delay_ms(10);
			status=!status;
			while((SW&(1<<5))==0);
		}

		if(status)
		{
			LED|=(1<<2)|(1<<4)|(1<<6);
			delay_ms(500);

			LED&=(~(1<<2))&(~(1<<4))&(~(1<<6));
			delay_ms(500);
		}
		else
		{
			LED|=(1<<2)|(1<<4)|(1<<6);
		}
	}
}

void delay_ms(unsigned int t)
{
	unsigned int i,j;
	for(i=0;i<t;i++)
	{
		for(j=0;j<123;j++);
	}
}