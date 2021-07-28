#include <stdio.h>
#include <stdlib.h>

int main(){

    char s[250] = " ";

    printf("Entrer une ligne : ");
    scanf("%s",s);

    int n = 0;

    for (char *t = s; *t != '\0' ; ++t)
    {
        if (*t == '(')
            ++n;
        else if (*t == ')')
            --n;

        if (n < 0)
            break;
    }

    if (n==0)
        printf("Le compte est bon.\n");
    else
        printf("Erreur eu niveau des  parentheses .\n");

    return 0;
}  
