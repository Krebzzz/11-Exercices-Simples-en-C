#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[45];
    int i;

    printf("Saisir une chaine de caractere : ");
    fgets(str,45,stdin);
    for ( i = strlen(str) - 1; i >= 0 ;i--)
    {
        printf("%c",str[i]);
    }
    
}