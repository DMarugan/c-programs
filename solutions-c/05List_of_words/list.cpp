#include <stdio.h>
#include <stdlib.h>

int main(){
	int tama�o=0;
	const char *list[] = {
		"bread",
		"toast",
		"bacon"
	};

	tama�o = sizeof(list)/sizeof(char *);

	for(int i=0;i<tama�o;i++){
		printf("%s", list[i]);
		printf("\n");
	}

	return EXIT_SUCCESS;
}