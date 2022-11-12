#include <stdio.h>
int main()
{
	float  a, b = 0;
	int n;
	printf("enter integer N:");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		a = 1.0 / i;
		b = b + a;
	}
	printf("sum of numbers from 1 to 1/n = %f", b);
	return 0;
}