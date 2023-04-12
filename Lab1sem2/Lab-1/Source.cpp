#define _CRT_SECURE_NO_WARNINGS
#include "Header.h";

void output_array(machine* array, int size)
{
	printf("--------------------------------\n");
	for (int i = 0; i < size; i++)
	{
		printf("%s\n", array[i].name);
		printf("Cost :%d $\n", array[i].cost);
		printf("Weight :%d kg\n", array[i].weight);
		printf("Color:");
		switch (array[i].color)
		{
		case 0:
			printf("red\n");
			break;
		case 1:
			printf("green\n");
			break;
		case 2:
			printf("blue\n");
			break;
		case 3:
			printf("black\n");
			break;
		}
		printf("--------------------------------\n");
	}
}
void swap(machine* array, int ind_1, int ind_2)
{
	machine tmp = array[ind_1];
	array[ind_1] = array[ind_2];
	array[ind_2] = tmp;
}
void struct_sorting(machine* array, int size, int sorted_field)
{
	int swaped = 0;
	do {
		swaped = 0;
		for (int i = 0; i < size - 1; i++)
		{
			if (strcmp(array[i].name, array[i + 1].name) == 0)
			{
				switch (sorted_field)
				{
				case 1: {
					if (array[i].cost > array[i + 1].cost)
					{
						swap(array, i, i + 1);
						swaped = 1;
					}
					break;
				}
				case 2:
				{
					if (array[i].weight > array[i + 1].weight)
					{
						swap(array, i, i + 1);
						swaped = 1;
					}
					break;
				}
				case 3:
				{
					if (array[i].color > array[i + 1].color)
					{
						swap(array, i, i + 1);
						swaped = 1;
					}
					break;
				}
				}
			}
			if (strcmp(array[i].name, array[i + 1].name) > 0)
			{
				swap(array, i, i + 1);
				swaped = 1;
			}
		}
	} while (swaped == 1);
}
void delet_struct_element(machine** array, int* size, int target_ind)
{
	free((*array)[target_ind].name);
	if (target_ind != ((*size) - 1))
	{
		for (int i = target_ind; i < (*size) - 1; i++)
		{
			(*array)[i] = (*array)[i + 1];
		}
	}
	(*size)--;
	(*array) = (machine*)realloc((*array), (*size) * sizeof(machine));
}
int safe_scanf()
{
	int number;
	while (scanf("%d", &number) != 1 || getchar() != '\n')
	{
		printf("Invalid input. Try again.\n");
		rewind(stdin);
	}
	return number;
}
void create_struct_arr(machine** array, int* size)
{
	printf("Input the size of array:\n");
	while (((*size) = safe_scanf()) < 0)
	{
		printf("Try again ,amount of elements must be > 0\n ");
		rewind(stdin);
	}
	(*array) = (machine*)malloc(sizeof(machine) * (*size));
}
char* get_str() {
	char* buf = (char*)malloc(sizeof(char));
	int i = 0;
	char b;
	do
	{
		b = getchar();
		if (b == '\n')
			break;
		while ((b < 'a' && b>'Z') || (b < 'A') || (b > 'z'))
		{
			rewind(stdin);
			printf("Wrong input\n");
			b = getchar();
		}
		buf[i] = b;
		i++;
		buf = (char*)realloc(buf, sizeof(char) * (i + 1));
	} while (1);
	buf[i] = 0;
	return buf;
}

void inicialize_struct_element(machine* array, int ind)
{
	printf("Input name of machine: ");
	char* tmp = get_str();
	array[ind].name = (char*)malloc((strlen(tmp)+1) * sizeof(char));
	strcpy(array[ind].name, tmp);
	printf("\n");
	printf("Input the wight of machine:");
	array[ind].weight = safe_scanf();
	while (array[ind].weight < 0)
	{
		rewind(stdin);
		printf("Wrong input");
	}
	printf("\n");
	printf("Input the cost of machine :");
	array[ind].cost = safe_scanf();
	printf("Chouse the color\n 0 - red \n 1 - green\n 2 - blue \n 3 - black\n >>");
	int choise = safe_scanf();
	while (choise < 0 || choise > 3)
	{
		printf("Wrong input\n ");
		rewind(stdin);
		choise = safe_scanf();
	}
	switch (choise)
	{
	case 0:
	{
		array[ind].color = red;
		break;
	}
	case 1:
	{
		array[ind].color = green;
		break;
	}
	case 2:
	{
		array[ind].color = blue;
		break;
	}
	case 3:
	{
		array[ind].color = black;
		break;
	}
	}
}
void inicializating(machine* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		inicialize_struct_element(array, i);
	}
}
void print_menu()
{
	printf("						Menu\n");
	printf("Press 1 to creat struct array \n");
	printf("Press 2 to initialize array \n");
	printf("Press 3 to sort array \n");
	printf("Press 4 to output array\n");
	printf("press 5 to delet element\n");
	printf("Press 0 to exit\n >>");

}