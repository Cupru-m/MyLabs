#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include"Header.h"
#include <stdlib.h>

int main()
{
	int mas[100][100];
    int numberOfRows = 0, numberOfColumns = 0;
	printf("Input the number of rows:");
    numberOfRows = safe_scanf();
    printf("\nInput the number of colums:");
    numberOfColumns = safe_scanf();
    while (numberOfColumns <= 0 || numberOfRows <= 0 || numberOfColumns > 100 || numberOfRows > 100)
    {
        printf("\n The numbers must be > 0 and < 100 \n");
        rewind(stdin);
        printf("\nImput the number of rows: ");
        numberOfRows = safe_scanf();
        printf("\nImput the number of columns: ");
        numberOfColumns = safe_scanf();
    }
    choose_input_method(mas, numberOfRows, numberOfColumns);
    get_characteristic(mas, numberOfRows, numberOfColumns);
    output_mas(mas, numberOfRows, numberOfColumns);
    buble_soting(mas, numberOfRows, numberOfColumns);
    printf("\n");
    output_mas(mas, numberOfRows, numberOfColumns);
	return 0;
}
