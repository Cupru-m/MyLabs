#include <stdio.h>

int main()
{
	float a = 0, b = 0, c = 0;
	printf("print a,b,c respectivel ");
	scanf_s("%f %f %f", &a, &b, &c);


	if ((a == b) || b == c || c == a) {
		printf("there is an equal pair of numbers");
		return 0;
	}
	else {
		printf("there isn't any equal pair of numbers");
		return 0;
	}
	return 0;

}