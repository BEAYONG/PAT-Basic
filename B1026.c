#include<stdio.h>
#define CLK_TCK 100
int main(void)
{
    int  n1, n2, result;
    int  h, m, s;
    scanf("%d %d", &n1, &n2);
    result = n2 - n1;
    if ((result % CLK_TCK) >= 50)
        result = result / CLK_TCK + 1;
    else
        result = result / CLK_TCK;
    h = result / 3600;
    m = (result % 3600) / 60;
    s = result % 60;
    printf("%02d:%02d:%02d", h, m, s);
}
