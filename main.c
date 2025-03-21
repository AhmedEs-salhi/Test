#include "main.h"

int main()
{
	int addition;
	int substruction;
	int produitt;

	addition = add(6, 5);
	substruction = sub(9, 4);
	produitt = produit(5, 3);

	printf("Addition = %d\n", addition);
	printf("Substruction = %d\n", substruction);
	printf("Produit = %d\n", produitt);

	return 0;
}
