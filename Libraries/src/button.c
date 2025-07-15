#include "reg52.h"
#include "button.h"
#include "delay.h"

sbit button = P3^5;

unsigned char button_read(void)
{
    unsigned char button_state;

    if(button == 0)
    {
        delay_ms(20);
        if(button == 0)
        {
            button_state = 0;
        }
        while(button == 0);
    }
    else
    {
        button_state = 1;
    }

    return button_state;
}