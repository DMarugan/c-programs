#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	for(int i=0;i<10;i++)
		printf("%s\n", argv[1]);

	printf("\n");
    return EXIT_SUCCESS;
}
