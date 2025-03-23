#include "main.h"

void printTable(int array[], int size)
{
	int i;
	int counter;

	counter = 0;
	printf("[");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (counter++ < size - 1)
			printf(", ");
	}
	printf("]\n");
}
