#include <stdio.h>
#include <stdlib.h>

int main(){
	int tamaño=0;
	const char *list[] = {
		"bread",
		"toast",
		"bacon"
	};

	tamaño = sizeof(list)/sizeof(char *);

	for(int i=0;i<tamaño;i++){
		printf("%s", list[i]);
		printf("\n");
	}

	return EXIT_SUCCESS;
}