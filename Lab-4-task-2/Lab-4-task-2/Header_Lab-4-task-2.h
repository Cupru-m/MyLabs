#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
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

void output_mas(int mas[100][100], int numberOfrows, int numberOfcolumns)
{
    int n, m;
    for (n = 0; n < numberOfrows; n++)
    {
        for (m = 0; m < numberOfcolumns; m++)
        {
            
                printf("   %d   ", mas[n][m]);
        }
        printf("\n");
    }
    return;
}
int rand_input_mas(int mas[100][100], int numberOfRows, int numberOfColumns)
{
    srand(time(NULL));
    int column_ind, row_ind;
    for (row_ind = 0; row_ind < numberOfRows;row_ind++)
    {
        for (column_ind = 0; column_ind < numberOfColumns; column_ind++)
        {
            mas[row_ind][column_ind] = -100 + rand() % 201;
        }
    }
    return mas[100][100];
}
int hand_input_mas(int mas[100][100], int numberOfRows, int numberOfColumns)
{
    int column_ind, row_ind;
    for (row_ind = 0; row_ind < numberOfRows;row_ind++)
    {
        for (column_ind = 0; column_ind < numberOfColumns; column_ind++)
        {
            printf("Input the %d element of %d row : ", column_ind + 1, row_ind + 1);
            mas[row_ind][column_ind] = safe_scanf();
        }

    }
    return mas[100][100];
}
void choose_input_method(int mas[100][100], int numberOfRows, int numberOfColumns)
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
        hand_input_mas(mas, numberOfRows, numberOfColumns);
    }
    else
    {
        rand_input_mas(mas, numberOfRows, numberOfColumns);
    }
    printf("\n");
    return;
}


