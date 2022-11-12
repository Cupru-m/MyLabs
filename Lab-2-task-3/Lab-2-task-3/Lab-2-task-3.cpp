#include <stdio.h>
int fibonachi(int n, int g);
int main()
{
	int const h = 1;
	int const r = 2;
	int F1, n, F2;
	printf(" enter fibonacci number :");
	scanf_s("%d", &n);
	F1 = fibonachi(n,1);
	F2 = fibonachi(n,2);
	printf("previous number %d \n", F1);
	printf("next number: %d", F2);
	return 0;
}

int fibonachi(int n, int g)
{
	
		int a = 1, b = 1, c =0;

		int i;
		for (i = 4; c!=n ; i++)
		{
			
			c = a + b;
			a = b;
			b = c;
		}
		if(g==1)
		return a;
		if (g == 2)
		{
			c = a + b;
			return c;
		}
		
	
}
