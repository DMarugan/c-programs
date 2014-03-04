#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero=0, suma=0, contador=0, media=0;

    scanf("%i", &numero);
    while(numero>=1){
         suma+=numero;
         scanf("%i", &numero);
		 contador++;
    }

	media = suma / contador;

	printf("La suma es: %i", suma);
    printf("La media es: %i", media);
	printf("\n");

    return EXIT_SUCCESS;
}
