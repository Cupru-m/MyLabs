#include <iostream> #include <stdio.h>

int main() {

	int a = 0;

	printf("print the number from 0 to 9\n");
	scanf_s("%d", &a);
	if (a < 0 || a > 9)
	{
		printf("wrong number");

		return 0;
	}

	switch (a)
	{
	case 0: printf("Zero");

		break;

	case 1: printf("one");

		break;

	case 2: printf("two");

		break;

	case 3: printf("three");

		break;

	case 4: printf("four");

		break;

	case 5: printf("five");
		break;

	case 6: printf("six");
		break;

	case 7: printf("seven");

		break;
	case 8: printf("eight");

		break;
	case 9: printf("nine");
		break;
	}
	return 0;
}