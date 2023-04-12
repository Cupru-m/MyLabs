#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum color {
	red, green, blue, black
};

typedef struct machine_info {
	int weight;
	int cost;
	char* name;
	color color;
}machine;
void create_struct_arr(machine** array, int* size);
char* get_str();
void inicialize_struct_element(machine* array, int ind);
void struct_sorting(machine* array, int size, int sorted_field);
void output_array(machine* array, int size);
void inicializating(machine* array, int size);
int safe_scanf();
void delet_struct_element(machine** array, int* size, int target_ind);
void print_menu();