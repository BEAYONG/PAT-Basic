#include<stdio.h>
int main(void)
{
    int num,loc;
    int n[101];
    int temp[100];
    int j;
    scanf("%d %d",&num,&loc);
    loc=loc%num;
    for (int j =0;j<num;j++)
    {
    scanf("%d",&n[j]);
    if(j<num-loc)
    temp[j+loc]=n[j];
    else
    temp[j+loc-num]=n[j];   
    }
     for (int j =0;j<num;j++)
     {
         if (j<num-1)
    printf("%d ",temp[j]);
         else
             printf("%d",temp[j]);
     }
    
    
}
