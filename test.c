#include <stdio.h>
#include <52.h>

sbit test=P0^0;
int time;
int main(int argc, char const *argv[])
{
    /* code */
    int i;
    while (1)
    {
       for(i=0;i<100;i++) /* code */
        (
            test= ~ test; 
        )
    }
    
   // for

    return 0;
}



