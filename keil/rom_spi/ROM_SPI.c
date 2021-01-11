#include "reg52.h"
unsigned char i;
sbit P00=P0^0;

main()
{
	while(1)
	{
		for(i=0;i<100;i++)
		{
			;
		}
		P00=~P00;
	}	
}