#include <stdio.h>
#include <stdlib.h>

int main(){

    int numeros[10], suma=0; 
	double media=0;

    for(int i=0;i<10;i++){
		printf("Numero: ");
		scanf("%i", &numeros[i]);
		suma +=numeros[i];
		}
		media = suma/10.;
		printf("%.2lf\n", media);

    return EXIT_SUCCESS;
}
