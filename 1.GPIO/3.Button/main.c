#include "led_don.h"
#include "button.h"
#include "reg52.h"
#include "delay.h"

void main()
{
    unsigned char count = 0;

	while(1)
	{
       if(button_read() == 0)
        {
            count++;
            if(count >= 6) count = 0;
        }

        if(count == 1)
        {
            sang_don(2,100);
        }
        else if (count == 2)
        {
            sang_dan(2,100);
        }
        else if (count == 3)
        {
            tat_dan(2,100);
        }
        else if (count == 4)
        {
            sang_duoi_trai(1,2,100);
        }
        else if (count == 5)
        {
            sang_duoi_phai(1,2,100);
        }
        else
        {
            sang_khac(1,2,100);
        }
        
	}
	
}
  