#ifndef __BUTTON__
#define __BUTTON__

typedef struct
{
	unsigned char button_state;
	unsigned char time;
	unsigned char (*callback)(void);
} button_t;

unsigned char button_read(void);

#endif // __BUTTON__