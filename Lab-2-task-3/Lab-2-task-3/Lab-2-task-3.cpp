#include <stdio.h>
int fibonachi(int n);
int main()
{
	int F1, n, F2;
	printf(" enter fibonacci number :");
	scanf_s("%d\n", &n);
	F1 = fibonachi(n - 1);
	F2 = fibonachi(n + 1);
	printf("previous number %d \n", F1);
	printf("next number: %d", F2);
	return 0;
}

int fibonachi(int n)
{

	int a = 1, b = 1, c;

	if (n <= 2)

		return 1;


	for (int i = 3; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return b;

}