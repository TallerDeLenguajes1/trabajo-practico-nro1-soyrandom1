#include <stdio.h>
#include <stdlib.h>
#include <math.h>  

int cuadrado(int numero);
void cuadradoVoid();

//Apartado ii 
void cuadradoVoid()
{
	int numero;
	printf("Igrese numero: ");
	scanf("%d", &numero);
	int Nnumero = pow(numero, 2);
	printf("%d al cuadrado es %d",numero, Nnumero);
	return;
}

int main (void)
{
	int numero; //para apartado ii comentar esta linea

	printf("Igrese numero: "); //para apartado ii comentar esta linea
	scanf("%d", &numero); //para apartado ii comentar esta linea
	printf("%d Al cuadrado es %d",numero,cuadrado(numero)); //para apartado ii comentar esta linea
	//cuadradoVoid(); //para aprtado ii sacar comment a esta linea

	//apartado iii
	int *PNum = NULL;
	PNum = &numero; 
	printf("\nPuntero: %p\n",PNum);
	printf("Numero: %d\n",*PNum);


	return 0;
}

int cuadrado(int numero)
{
	int Nnumero = pow(numero, 2);
	return Nnumero;
}
