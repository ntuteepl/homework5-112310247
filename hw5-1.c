#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h,s;
    scanf("%f",&s);
    h=(9.0*s)/5.0+32;
    h=(int)(h*1000+0.5)/1000.0;
    printf("%0.1f",h);
}
