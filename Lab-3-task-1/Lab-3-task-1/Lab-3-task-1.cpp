#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
int safe_scanf(int number);
int input_mas(int* m, int size);
int main()
{
    
    int FirstPositiveInd=0, LastPositiveInd=0;
   
    int sum = 0, min;
    int size=0;
    int mas[100];
    printf("Input the size of array:");
    size = safe_scanf(size);
    while (size <=0 )
    { 
        printf("size must be >=0\n");
        rewind(stdin);
        size = safe_scanf(size);
    }
    input_mas(mas, size);
    min = mas[0];
    for (int i = 0; i < size; i++)
    {
        if (mas[i] < min)
        {
            min = mas[i];
        }
    }
    int trigger = 0;
    for (int i = 0; i < size; i++)
    {
        if (mas[i] > 0)
        {
            FirstPositiveInd = i;
            trigger++;
            break;
        }
    }
        for (int i = size - 1; i > 0; i--)
        {
            if (mas[i] > 0 && mas[i] != mas[FirstPositiveInd])
            {
                LastPositiveInd = i;
                trigger++;
                break;
            }
        }
        if (trigger < 2)
        {
            printf("The min value is %d\n", min);
            printf("conditions are not satisfied");

            return 0;
        }
    for (int i= FirstPositiveInd +1;i<LastPositiveInd;i++)
    {
            sum = sum+ mas[i];
    }
    printf("The min value is %d\n", min);
    printf("The sum of numbers between the first and the last positive  values :%d",sum);
    return 0;
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
