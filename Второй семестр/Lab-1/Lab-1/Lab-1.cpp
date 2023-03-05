#define _CRT_SECURE_NO_WARNINGS

#include "Header.h";
int main()
{
	machine* array = (machine*)malloc(sizeof(machine));
	int size;
	
	int tasknum = -1, k;
	while (tasknum != 0)
	{
		int choise =-1;
		print_menu();
		choise = safe_scanf();
		while (choise < 0 || choise>5)
		{
			rewind(stdin);
			printf("Wrong input\n");
			choise = safe_scanf();
		}
		switch (choise)
		{
		case 0:
		{
			return 0;
		}
		case 1:
		{
			create_struct_arr(array, &size);
			break;
		}
		case 2:
		{
			inicializating(array, size);
			break;
		}
		case 3:
		{
			printf("Chouse the field you want to sort\n 1 - cost\n 2 - weight\n 3 - color\n >>");
			int choise_sort = safe_scanf();
			while (choise < 0 || choise>5)
			{
				rewind(stdin);
				printf("Wrong input\n");
				choise_sort = safe_scanf();
				struct_sorting(array, size, choise_sort);
				break;
			}
			struct_sorting(array, size, choise_sort);
			break;
		}
		case 4:
		{
			output_array(array, size);
			break;
		}
		case 5:
		{
			printf("Chouse the index of element\n ");
			for (int i = 0; i < size; i++)
				printf( " %d ", i);
			printf("\n>>");
			int target_ind = safe_scanf();
			while (target_ind > size || target_ind < 0)
			{
				rewind(stdin);
				printf("Wrong input");
				target_ind = safe_scanf();
			}
			delet_struct_element(array, &size, target_ind);
			break;
		}
		}
		system("pause");
		system("cls");
	}
	for (int i = 0; i < size; i++)
	{
		free(array[i].name);
	}
	free(array);
}
