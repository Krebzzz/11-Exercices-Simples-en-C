##include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 150

//-----------------------------------------------------

int main(){
    char str[size];
    char c;
    int i = 0, compteur = 0 ;
    printf("\nEntrer une phrase : ");
    fgets(str, size, stdin);
    printf("\nPhrase >> %s",str);
    printf("\nEntrer la lettre a decouvrir : ");
    scanf("%c",&c);
    printf("\nLettre >> %c",c);

    while (str[i])
    {
        if (str[i] == c)
        {
            compteur++;
        }  
        i++;
    }
    if (compteur < 1)
    {
        printf("\nLe letter %c n'a pas ete trouvee !");
    }
    else
        printf("\nLa lettre %c a ete trouvee ! %d fois exactement !",c,compteur);

    return 0;
}