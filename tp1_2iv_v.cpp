#include <stdio.h>
#include <stdlib.h>

void invertir(int* numeroA, int* numeroB);

//para apartado V comentar esta funcion
void invertir(int* numeroA, int* numeroB)
{
	int tempNum = *numeroA;
	*numeroA = *numeroB;
	*numeroB = tempNum;
	return;
}

//Apartado V
/*
void invertir(int* numeroA, int* numeroB)
{
	int tempNum = *numeroA;
	if(*numeroA > *numeroB)
	{
	*numeroA = *numeroB;
	*numeroB = tempNum;
	}

	return;
}
*/

int main (void)
{
	int numeroA=10;
	int numeroB=23;

	printf("Igrese numero A: ");
	scanf("%d", &numeroA);
	printf("\nIgrese numero B: ");
	scanf("%d", &numeroB);

	invertir(&numeroA, &numeroB);
	printf("\n Nuevo valor de A: %d Nuevo valor de B:%d\n",numeroA,numeroB);

	return 0;
}

