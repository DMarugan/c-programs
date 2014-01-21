#include <stdio.h>
#include <stdlib.h>


int main(){


    char frase[30];

    printf("Inserte una frase: ");

    gets(frase);

for(int i=0; i<10; i++)

    printf("%s\n", frase);


    return EXIT_SUCCESS;
}
