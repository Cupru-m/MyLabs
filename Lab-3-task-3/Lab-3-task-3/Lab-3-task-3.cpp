#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include "Header_Lab-3-task-3.h"
int safe_scanf();
int input_mas(int* m, int size);
void output_mas(int* m, int size);
int choose_input_method(int* mas, int size);
int sort_inc_mas(int* m, int size);
int random_input_mas(int* m, int size);
int sort_dec_mas(int* m, int size);
int main()
{
	int mas_inc[100], mas_dec[100];
	int size_inc = 1, size_dec = 1;
	printf("Imput the size of increasing array :");
	size_inc = safe_scanf();
	printf("\nImput the size of decreasing array:");
	size_dec = safe_scanf();
	while (size_inc <= 0 || size_dec <= 0 || size_inc > 100 || size_dec > 100)
	{
		printf("\nSizes must be > 0 and < 100 \n");
		rewind(stdin);
		printf("\nImput the size of increasing array :");
		size_inc = safe_scanf();
		printf("\nImput the size of decreasing array:");
		size_dec = safe_scanf();
	}

	printf("Increasing array :\n");
	choose_input_method(mas_inc, size_inc);
	 sort_inc_mas(mas_inc,size_inc);
	printf("Decreasing array:\n");
	choose_input_method(mas_dec, size_dec);
	 sort_dec_mas( mas_dec,size_dec);
	int new_size = size_inc + size_dec;
	int new_mas[200];

	for (int i = 0, k = size_inc - 1, j = 0; i < new_size;)
	{

		if (mas_dec[j] > mas_inc[k])
		{
			new_mas[i] = mas_dec[j];
			if (j < size_dec)
				j++;
			i++;
		}
		else
		{
			new_mas[i] = mas_inc[k];
			if (k >= 0)
				k--;
			i++;
		}
		if (k < 0 && j < (size_dec))
		{
			do
			{
				new_mas[i] = mas_dec[j];
				j++;
				i++;
			} while (j <= size_dec && i < new_size);
		}
		if (j > (size_dec - 1) && k > 0)
		{
			do {
				new_mas[i] = mas_inc[k];
				i++;
				k--;
			} while (k >= 0 && i < new_size);
		}
	}
	printf("\nNew decreasing array: \n ");
	output_mas(new_mas, new_size);
	return 0;
}

