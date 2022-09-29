
#include <iostream>
#include <stdio.h>
int main()
{
	int b = -1;
	int c = 0;
	int r;

	while (c != 27)
	{
		b = b + 1;
		if (b == 10) {
			printf("The number is not exist");
			return 0;
		}
		c = 10 * b + 11 - b - 110 + 10 * b - b;
	}
	printf("\nb=%d", b);
	printf("\nc=%d", c);
	r = 110 - 10 * b + b;
	printf("\nthe number is %d", r);
	return 0;
}
