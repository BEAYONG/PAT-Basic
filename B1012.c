#include<stdio.h>
int main(void)
{
    int num;
    int n;
    int A1 = 0, A2 = 0, A3 = 0, A5 = 0;
    double A4;
    int t = 0;
    int count = 0;
    int sum = 0;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &n);
        if (n % 5 == 0)
        {
            if(n%2==0)
            A1 += n;
        }
        else if (n % 5 == 1)
        {
            t++;
            if (t % 2 == 0)
                A2 = A2 - n;
            else
                A2 = A2 + n;
        }
        else if (n % 5 == 2)
            A3++;
        else if (n % 5 == 3)
        {
            count = count+1;
            sum =sum + n;
        }
        else 
        {
            if (n > A5)
                A5 = n;
        }

    }
    if (A1 != 0) printf("%d ", A1);
    else printf("N ");

    if (t != 0) printf("%d ", A2);
    else printf("N ");

    if (A3 != 0) printf("%d ", A3);
    else printf("N ");

    if (count != 0) printf("%.1f ", 1.0*sum/count);
    else printf("N ");

    if (A5 != 0) printf("%d", A5);
    else printf("N");
    return 0;
}
