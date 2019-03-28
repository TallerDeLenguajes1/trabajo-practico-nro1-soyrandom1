#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int variable = 123;
	int *p1 = NULL;
	int *p2 = NULL;
	int *p3 = NULL;
	p1 = &variable; 
 	p2 = &variable;
	p3 = &variable;

	printf("Puntero 1: %p\n",p1);
	printf("Puntero 2: %p\n",p2);
	printf("Puntero 3: %p\n",p3);
printf("\n");
	printf("valor Puntero 1: %d\n",*p1);
	printf("valor Puntero 2: %d\n",*p2);
	printf("valor Puntero 3: %d\n",*p3);
printf("\n");
	printf("Puntero 1: %p\n",&p1);
	printf("Puntero 2: %p\n",&p2);
	printf("Puntero 3: %p\n",&p3);



	return 0;
}

