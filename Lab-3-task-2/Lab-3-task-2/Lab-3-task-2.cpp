#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include<stdlib.h>
int random_input_mas(int* m, int size);
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
  printf("Choose the method of input \n '1'- hand input \n '2' - rand input\n");
  int choise = 3;
  choise = safe_scanf(choise);

  while (choise < 0 || choise >2) {
      printf("Involid input, try again ");
      rewind(stdin);
      choise = safe_scanf(choise);
  }
  if (choise == 1) {
      input_mas(mas, size);
  }
  else
  {
      random_input_mas(mas, size);
  }
  printf("\n");
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
      for (int i= 1; i!= Ind_of_last_even;i++)
      {
          if (Ind_of_last_even == size - 1) break;
          mas[Ind_of_last_even+i] = mas[Ind_of_last_even+i+1];
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
        printf("The % d element = % d\n", i+1, m[i]);
    }
    return;
}
int random_input_mas(int* m, int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        m[i] = -100 + rand() % 200;
        printf("The %d element = %d\n", i + 1, m[i]);
    }
    return *m;
}