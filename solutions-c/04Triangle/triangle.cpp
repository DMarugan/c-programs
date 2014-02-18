#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int tamaño = atoi(argv[1]);
	
	for(int fila=0;fila<=tamaño;fila++){
		for(int col=0;col<=fila;col++){
			if(fila>col)
				printf("%c", *argv[2]);
			else
				printf("   ");

		}
		printf("\n");
	}


	return EXIT_SUCCESS;
}