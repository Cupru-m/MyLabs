#include <iostream>
#include <stdio.h>

int input_mas(int* m, int size);
int main()
{
    
    int FirstPositiveInd=0, LastPositiveInd=0;
   
    int sum = 0, min;
    int size;
    int mas[100];
    printf("Input the size of array:");
    scanf_s("%d", &size);
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
    int input_mas (int *m, int size)
 {
    for (int i = 0; i < size; i++)
    {
        printf("\n Input the %d element:", i + 1);

        scanf_s("%d", &m[i]);
    }
    
    return *m;
}
