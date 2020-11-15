#include <stdio.h>
int main(void)
{
	int group,t;
	long long n1, n2, n3;
	scanf("%d", &group);
	for (int t = 0; t < group; t++)
	{
		scanf("%lld %lld %lld", &n1, &n2, &n3);
		if (n1 + n2 > n3)
			printf("Case #%d: true\n", t + 1);
		else
			printf("Case #%d: false\n", t + 1);
	}
return 0;
}
