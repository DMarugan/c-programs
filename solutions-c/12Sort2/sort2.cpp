#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int tamano = 0, temp = 0;

    const char *list[] = {"yield", "yelp", "yellow"};
    const char *temporal;

    tamano = sizeof(list)/sizeof(list[0]);

    printf("The correct order is: \n");

    for(int i=0;i<tamano-1;i++)
	for(int j=0;j<tamano-1;j++){

	    temp=strcmp(list[j], list[j+1]);

	    if(temp > 0){
		temporal=list[j];
		list[j]=list[j+1];
		list[j+1]=temporal;
	    }
	}

    for(int i=0;i<tamano;i++)
	printf("%s \n", list[i]);


    return EXIT_SUCCESS;
}
