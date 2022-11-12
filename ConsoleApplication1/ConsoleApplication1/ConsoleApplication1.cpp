#include <stdio.h>

int main()
{
	char scan[100];
	int	cnt = 0;
	do {
	gets_s(scan);
	
	
	
	for (int i = 0; i < 5; i++)
	{
		if (scan[i] > '9')
			cnt = 1;
	}
	if (cnt == 1)
	{
		printf("error");
		rewind(stdin);
	}
	} while (cnt == 1);

}
