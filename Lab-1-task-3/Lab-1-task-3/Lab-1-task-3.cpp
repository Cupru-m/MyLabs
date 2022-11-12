#include <stdio.h>
#include <math.h>
int main()
{
	float a = 0, b = 0, c = 0;
	printf("Enter a, b , c respectively\n");
	scanf_s("%f%f%f\n", &a, &b, &c);
	if (a != 0 && b != 0 && c != 0)
	{
		float  geo = a * b * c;
		if (geo < 0)
		{
			printf("error");
			return 0;
		}
		geo = pow(geo, 1.0 / 3.0);
		printf("%f", geo);
		return 0;

	}
	float avari = (a + b + c) / 3;
	printf("%f", avari);
	return 0;
}