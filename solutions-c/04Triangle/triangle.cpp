#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int tama�o = atoi(argv[1]);
	
	for(int fila=0;fila<=tama�o;fila++){
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