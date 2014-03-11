#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

	const char *list[] = { "yield", "yelp"};

	printf("El orden es: ");

	if(strcmp(list[0], list[1]) < 0){
		
		printf("%s, %s", list[0], list[1]);
	
	}else{
		printf("%s, %s", list[1], list[0]);
	}

	printf("\n");

	return EXIT_SUCCESS;
}