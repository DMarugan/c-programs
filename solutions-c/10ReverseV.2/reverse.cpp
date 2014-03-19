#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){


    char frase[20];
	
    printf("\nInsert sentence to reverse: ");
    gets(frase);

    char *inicio = frase;
    char *final = frase;

    while(*final != '\0')
	final++;
    
    printf("\n");
    printf("The ORIGINAL is: %s \n", frase);
    printf("The REVERSE is: ");
    
    while(final != inicio){
	final--;
	printf("%c", *final);
    }
    printf("\n");

    printf("\n");

return EXIT_SUCCESS;
}
