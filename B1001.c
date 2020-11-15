#include <stdio.h>
int main(void)
{
    int i, count = 0;
   if(scanf("%d", &i))
    
   while(i!=1)
   {
            if (i % 2 == 0)
            {
                i /= 2;
                count++;
            }
            else
            {
                i = (3 * i + 1) / 2;
                count++;
            }
   }
       
    printf("%d", count);
    return 0;
}
