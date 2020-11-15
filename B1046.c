#include <stdio.h>
int main(void)
{
    int range;
    int n1,n2,n3,n4;
     int failA=0,failB=0;
    scanf("%d",&range);
    while(range-->0)
    {
        scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
        if((n2==n1+n3)&&(n4!=n1+n3))
        failB++;
        if((n4==n1+n3)&&(n2!=n1+n3))
        failA++;
        if ((n2==n1+n3)&&(n4==n1+n3))
        continue;
    }
    printf("%d %d",failA,failB);
    
}
