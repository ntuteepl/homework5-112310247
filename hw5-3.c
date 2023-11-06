#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time,zi;
    double money;
    scanf("%d%d",&time,&zi);
    if(time<=60)
    {
        money=time*zi;
        money=(int)(money*1000+0.5)/1000.0;
        printf("%0.1f",money);
    }
    if(time>60&&time<=120)
    {
        money=(time-60)*zi*1.33+60*zi;
        money=(int)(money*1000+0.5)/1000.0;
        printf("%0.1f",money);
    }
    if(time>120)
    {
        money=(time-120)*zi*1.66+60*zi+60*zi*1.33;
        money=(int)(money*1000+0.5)/1000.0;
        printf("%0.1f",money);
    }
}
