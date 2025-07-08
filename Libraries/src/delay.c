#define FREQ_OCS 12000000ul

#if (FREQ_OCS==12000000)
		void delay_ms(unsigned int t)
		{
			unsigned int i,j;
			for(i=0;i<t;i++)
			{
				for(j=0;j<123;j++);
			}
		}
#elif (FREQ_OCS==11059200)
		void delay_ms(unsigned int t)
		{
			unsigned int i,j;
			for(i=0;i<t;i++)
			{
				for(j=0;j<113;j++);
			}
		}
#elif (FREQ_OCS==8000000)
		void delay_ms(unsigned int t)
		{
			unsigned int i,j;
			for(i=0;i<t;i++)
			{
				for(j=0;j<108;j++);
			}
		}
#elif (FREQ_OCS==4000000)
		void delay_ms(unsigned int t)
		{
			unsigned int i,j;
			for(i=0;i<t;i++)
			{
				for(j=0;j<106;j++);
			}
		}
#else
		#error" Khong co tan so thach anh nay"
		
#endif
		
		
