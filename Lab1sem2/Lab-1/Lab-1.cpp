#define _CRT_SECURE_NO_WARNINGS

#include "Header.h";
int main()
{
	machine* array = (machine*)malloc(sizeof(machine));
	int size;
	
	int trigger_1 =0,trigger_2 =0, k;
	while (1)
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
			if (trigger_1 == 1)
			{
				printf("You already created array\n");
				break;
			}
			create_struct_arr(&array, &size);
			trigger_1 = 1;
			break;
		}
		case 2:
		{
			if (trigger_2 == 1)
			{
				printf("You already incialized array\n");
				break;
			}
			inicializating(array, size);
			trigger_2 = 1;
			break;
		}
		case 3:
		{
			if (trigger_1 != 1 || trigger_2 != 1)
			{
				printf("You must first create and initialize an array\n");
				break;
			}
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
			if (trigger_1 != 1 || trigger_2 != 1)
			{
				printf("You must first create and initialize an array\n");
				break;
			}
			output_array(array, size);
			break;
		}
		case 5:
		{
			if (trigger_1 != 1 || trigger_2 != 1)
			{
				printf("You must first create and initialize an array\n");
				break;
			}
			if (size == 0)
			{
				printf("There is no elements ");
				break;
			}
			printf("Chouse the index of element\n ");
			for (int i = 0; i < size; i++)
				printf( " %d ", i);
			printf("\n>>");
			int target_ind = safe_scanf();
			while (target_ind > size || target_ind < 0)
			{
				rewind(stdin);
				printf("Wrong input\n>>");
				target_ind = safe_scanf();
			}
			delet_struct_element(&array, &size, target_ind);
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
