#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero, suma;

    scanf("%i", &numero);
    while(numero>=1){
         suma+=numero;
         scanf("%i", &numero);
    }


    printf("%i", suma);


    return EXIT_SUCCESS;
}
