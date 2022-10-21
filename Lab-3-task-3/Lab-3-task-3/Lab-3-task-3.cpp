#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int safe_scanf( int number);
int input_mas(int* m, int size);
void output_mas(int* m, int size);
int main()
{
    int mas_1[100], mas_2[100];
    int size_1 = 1 , size_2 = 1 ;
    printf("Imput the size of increasing array :");
    size_1=safe_scanf(size_1);
    printf("\nImput the size of decreasing array:");
   size_2=  safe_scanf(size_2);
    while (size_1 <= 0 || size_2 <= 0 || size_1>100 || size_2>100)
    {
        printf("\nSizes must be > 0 and < 100 \n");
        rewind(stdin);
        printf("\nImput the size of increasing array :");
        size_1=safe_scanf(size_1);
        printf("\nImput the size of decreasing array:");
        size_2 = safe_scanf(size_2);
    }
    printf("Increasing array :\n");
    input_mas(mas_1, size_1);
    printf("Decreasing array:\n");
    input_mas(mas_2, size_2);
     int new_size = size_1 + size_2;
     int new_mas[200];
   
        for (int i = 0, k = size_1 -1, j = 0; i < new_size;)
        {           
            
            if (mas_2[j] > mas_1[k])
            {
                new_mas[i] = mas_2[j];
                if (j < size_2)
                    j++;
                 i++;
            }
            else
            {
                new_mas[i] = mas_1[k];
                k--;
                i++;
            }
            if (k < 0 && j<(size_2-1)) 
            {
                    do
                    {
                        new_mas[i] = mas_2[j];   
                        j++;
                        i++;
                    } while (j < size_2 && i < new_size);
            }
            if (j > (size_2 - 1) && k > 0)
            {
                do {
                    new_mas[i] = mas_1[k];
                    i++;
                    k--;
                } while (k >= 0 && i < new_size);
            }
        }
        printf("\nNew decreasing array: \n ");
    output_mas(new_mas,new_size);
    return 0;
}

int safe_scanf(int number)
{
    int res;
    res = scanf("%d", &number);
    while (res != 1)
    {
        printf("Invalid input. Try again.\n");
        rewind(stdin);
        res = scanf("%d", &number);
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

