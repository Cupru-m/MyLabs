/*10. Проверить, все ли строки матрицы содержат хотя бы один положительный элемент.
Если да, то изменить знаки всех элементов матрицы на обратные.*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header_Lab-4-task-2.h"
int main()
{
	int mas[100][100];
	int numberOfRows, numberOfColumns;
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
    output_mas(mas, numberOfRows, numberOfColumns);
    for (int row_ind = 0, ctr = 0; row_ind < numberOfRows; row_ind++)
    {
        for (int column_ind = 0; column_ind < numberOfColumns; column_ind++)
        {
            if (mas[row_ind][column_ind] > 0)
            {
                ctr++;
                break;
            }
        }
        if (ctr == numberOfRows)
        {
            for (int row_ind = 0, ctr = 0; row_ind < numberOfRows; row_ind++)
            {
                for (int column_ind = 0; column_ind < numberOfColumns; column_ind++)
                {
                    mas[row_ind][column_ind] *= -1;
                }
            }
        }
    }
    printf("\n");
    output_mas(mas, numberOfRows, numberOfColumns);
    return 0;
}
