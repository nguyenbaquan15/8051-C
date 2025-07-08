#include "reg52.h"
#include "led_don.h"
#include "delay.h"

#define LED_PORT P1

void sang_don(unsigned char n,unsigned short t)
{
  	unsigned char i,j,k,a,b;
	for(k=0;k<n;k++)		 // so lan chay hieu ung
	{
		b=0xFF;
	 	for(i=8;i>0;i--)
	 	{
			a=0xFE;			// led sang khi o muc logic '0'
			for(j=0;j<i;j++)
			{
				LED_PORT=(a&b);
				delay_ms(t);
				a=(a<<1)|0x01;
			}
			b>>=1;
     	}
	 }
}

void sang_dan(unsigned char n,unsigned short t)
{
  	unsigned char i,k,a;
	for(k=0;k<n;k++)		 // so lan chay hieu ung
	{
		a=0xFE;			     // led sang khi o muc logic '0'
		for(i=0;i<8;i++)
		{
			LED_PORT=a;
			delay_ms(t);
			a=a<<1;
		}
     }
}

void tat_dan(unsigned char n,unsigned short t)
{
  	unsigned char i,k,a;
	for(k=0;k<n;k++)		 // so lan chay hieu ung
	{
		a=0x80;			// led sang khi o muc logic '0'
		for(i=0;i<8;i++)
		{
			LED_PORT=a;
			delay_ms(t);
			a=(a>>1)|0x80;
		}	
     }
}

void sang_duoi_trai(unsigned char k, unsigned char n,unsigned short t)
{
  	unsigned char i,j,a;
	switch(k)
	{
	  case 1:
	  {
	  	for(i=0;i<n;i++)		 // so lan chay hieu ung
	    {
			a=0xFE;			     // led sang khi o muc logic '0'
			for(j=0;j<8;j++)
			{
				LED_PORT=a;
				delay_ms(t);
				a=(a<<1)|0x01;
			}	
     	} break;
	  }
	  case 2:
	  {
	  	unsigned char i,a;
		for(i=0;i<n;i++)		 // so lan chay hieu ung
		{
			a=0xFC;			// led sang khi o muc logic '0'
			for(j=0;j<8;j++)
			{
				LED_PORT=a;
				delay_ms(t);
				a=(a<<1)|0x01;
			}	
     	}
       } break;
	  }  
}

void sang_duoi_phai(unsigned char k, unsigned char n,unsigned short t)
{
  	
	unsigned char i,j,a;
	switch(k)
	{
		case 1:
		{
			for(i=0;i<n;i++)		 // so lan chay hieu ung
			{
				a=0x7F;			     // led sang khi o muc logic '0'
				for(j=0;j<8;j++)
				{
					LED_PORT=a;
					delay_ms(t);
					a=(a>>1)|0x80;
				}	
     		}  
			break;
		}
		case 2:
		{
			for(i=0;i<n;i++)		 // so lan chay hieu ung
			{
				a=0x3F;			     // led sang khi o muc logic '0'
				for(j=0;j<8;j++)
				{
					LED_PORT=a;
					delay_ms(t);
					a=(a>>1)|0x80;
				}	
     		}  
			break;
		}
	}
	
}	

void sang_khac(unsigned char k, unsigned char n,unsigned short t)
{
  	
	unsigned char i,j,a,b;
	switch(k)
	{
		case 1:
		{
			for(i=0;i<n;i++)		 // so lan chay hieu ung
			{
				a=0xEE;			       // led sang khi o muc logic '0'
				b=0x11;
				for(j=0;j<4;j++)
				{
					LED_PORT=a;
					delay_ms(t);
					a=(a<<1)|b;
				}	
     	}  
			break;
		}
		case 2:
		{
			
			break;
		}
		case 3:
		{
			
			break;
		}
	}
	
}	