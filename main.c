#include "main.h"

int main()
{
	int addition;
	int substruction;
	int produitt;
	int division;

	addition = add(6, 5);
	substruction = sub(9, 4);
	produitt = produit(5, 3);
	division = euclidienDiv(4, 3);

	printf("Addition = %d\n", addition);
	printf("Substruction = %d\n", substruction);
	printf("Produit = %d\n", produitt);
	if (division == -1)
		printf("Can't divide by 0\n");
	else
		printf("Division = %d\n", division);

	return 0;
}
