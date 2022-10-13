#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int input_mas(int* m, int size);
int safe_scanf(int number);
void output_mas(int* m, int size);
int main()
{
    int mas[100];
    int size=0,Ind_of_last_even;
    printf("imput the size of array:");
  size = safe_scanf(size);
  while (size <= 0)
  {
      printf("The size must be > 0\n");
      rewind(stdin);
      printf("imput the size of array:");
      size = safe_scanf(size);
  }
  input_mas( mas, size);
  int trigger = 0;
  for (int i = size - 1; i >= 0; i--)
  {
      if ( mas[i] % 2 == 0)
      {
          Ind_of_last_even = i;
          trigger++;
          break;
      }
  }
  if (trigger != 1)
  {
      printf("There is no even numbers");
      return 0;
  }
  while (int size_= size-1 != Ind_of_last_even) 
  {
      for (int i = Ind_of_last_even + 1; i < size - 1; i++)
      {
          mas[i] = mas[i + 1];
      }
      size--;
  }
      output_mas(mas, size);

	return 0;
}
int safe_scanf(int number)
{
    int res ;
    res = scanf("%d", &number);
    while (res != 1)
    {
        printf( "Invalid input. Try again.\n");
        rewind(stdin);
        res = scanf("%d", &number);
    }
    return number ;
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
        printf("The %d element = %d\n", i+1, m[i]);
    }
    return;
}
