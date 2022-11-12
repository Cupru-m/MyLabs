#define _CRT_SECURE_NO_WARNINGS
#include"Header-Lab-4-task-3.h"
#include <stdio.h>
int main()
{
    int mas[100][100], size; int sum = 0;
	printf("Input the size of array:");
	size = safe_scanf();
    while (size <= 0  || size > 100 )
    {
        printf("\n The size must be > 0 and < 100 \n");
        rewind(stdin);
        printf("\nImput the size of array: ");
        size = safe_scanf();
      
    }
    choose_input_method(mas, size, size);
    output_mas(mas, size, size);
    for (int row_ind = 0 ; row_ind < (size)/2 ;row_ind++)
    {
        printf("row_ind %d\n", row_ind);
         for (int column_ind = (size - 1) / 2 + 1; column_ind < size; column_ind++)
        {
             printf("column_ind %d\n", column_ind);
            sum += mas[row_ind][column_ind];
        }
    }
    printf("Sum = %d", sum);
    return 0;
}
