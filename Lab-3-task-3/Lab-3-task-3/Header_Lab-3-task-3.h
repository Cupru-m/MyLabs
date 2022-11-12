#include <iostream>
#include <stdio.h>
int safe_scanf()
{
	int number;
	while (!scanf("%d", &number) || getchar() != '\n')
	{
		printf("Invalid input. Try again.\n");
		rewind(stdin);

	}

	return number;
}
int input_mas(int* m, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("\n Input the %d element:", i + 1);

		int res;
		res = scanf("%d", &m[i]);
		while (res != 1)
		{
			printf("Invalid input. Try again.\n");
			rewind(stdin);
			res = scanf("%d", &m[i]);
		}
	}

	return *m;
}
void output_mas(int* m, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("The %d element = %d\n", i + 1, m[i]);

	}
	return;
}
int random_input_mas(int* m, int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		m[i] = -100 + rand() % 200;

	}
	return *m;
}
int sort_inc_mas(int* m, int size)
{

	int swaped = 3;
	do
	{
		swaped = 0;
		for (int i = 0; i < size - 1; i++)
		{
			if (m[i] > m[i + 1])
			{
				int temp = m[i + 1];
				m[i + 1] = m[i];
				m[i] = temp;
				swaped = 1;
			}
		}
	} while (swaped == 1);

	return *m;
}
int choose_input_method(int* mas, int size)
{
	printf("Choose the method of input \n '1'- hand input \n '2' - rand input\n");
	int choise = 3;
	choise = safe_scanf();

	while (choise < 0 || choise >2) {
		printf("Involid input, try again ");
		rewind(stdin);
		choise = safe_scanf();
	}
	if (choise == 1) {
		input_mas(mas, size);
	}
	else
	{
		random_input_mas(mas, size);
	}
	printf("\n");
	return *mas;
}
int sort_dec_mas(int* m, int size)
{

	int swaped = 3;
	do
	{
		swaped = 0;
		for (int i = 0; i < size - 1; i++)
		{
			if (m[i] < m[i + 1])
			{
				int temp = m[i + 1];
				m[i + 1] = m[i];
				m[i] = temp;
				swaped = 1;
			}
		}
	} while (swaped == 1);

	return *m;
}
