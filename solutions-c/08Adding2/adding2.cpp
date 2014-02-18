#include <stdio.h>
#include <stdlib.h>

#define MAX 6

double suma(float numeros){
 
	float total=0;
		total += numeros;

	printf("TOTAL: %.2f ", total);
	return EXIT_SUCCESS;
}

int main(){

	float numeros[MAX];
	
	printf("Inserte numeros a sumar: \n");
	 
	for(int i=0; i<MAX; i++){
		printf("Numero %i: ", i+1);
		scanf("%f", &numeros[i]);
			suma(numeros[i]);
	}

	return EXIT_SUCCESS;
}