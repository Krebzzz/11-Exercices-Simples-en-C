#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 150

int xstrcmp(char chaine1[], char chaine2[])
{
    while (*chaine1 == *chaine2)
    {
        if (*chaine1 == '\0')
            return 0;

        ++chaine1;
        ++chaine2;
    }

    return (*chaine1 < *chaine2) ? -1 : 1;
}

int main(){
    
    char chaine[size], chaine_two[size];

    printf("\n=> ");
    scanf("%s",chaine);
    printf("\n=> ");
    scanf("%s",chaine_two);

    if (xstrcmp(chaine, chaine_two) == 0)
    {
        printf("Identique !");
    }
    else if (xstrcmp(chaine, chaine_two) == -1 )
    {
        printf("\n'%s' est plus petite que '%s'",chaine, chaine_two);
    }
    else if (xstrcmp(chaine, chaine_two) == 1 )
        printf("\n'%s' est plus grande que '%s'",chaine,chaine_two);
    
}


/*char chaine[] = "salut", chaine_two[] = "salut";
    if (strcmp(chaine,chaine_two)==0)
    {
        printf("Identique ! ");
    }
    else
        printf("Pas identique !");*/