#include <stdio.h>
#include <math.h>
long long cal(long i, int j);
int main(void)
{
    long long n1, n3;
    int n2, n4;
    scanf("%lld %d %lld %d", &n1, &n2, &n3, &n4);
    printf("%lld\n", cal(n1, n2) + cal(n3, n4));

}
long long cal(long i, int j)
{
    int count = 0;
    long temp = 0;
    while (i > 0)
    {
        if (i % 10 == j)
            count++;
        i = i / 10;
        
    }
    count = count - 1;
    while (count >= 0)
    {
        temp += j * pow(10, count);
        count--;
    }
    return temp;
}
