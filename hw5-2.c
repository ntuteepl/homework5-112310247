#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time;
    double money;
    scanf("%d",&time);
    if(time<=800)
    {
        money=time*0.9;
        money=(int)(money*1000+0.5)/1000.0;
        printf("%0.1f",money);
    }
    if(time>800&&time<1500)
    {
        money=time*0.81;
        money=(int)(money*1000+0.5)/1000.0;
        printf("%0.1f",money);
    }
    if(time>=1500)
    {
        money=time*0.79;
        money=(int)(money*1000+0.5)/1000.0;
        printf("%0.1f",money);
    }
}
