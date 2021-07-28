#include <stdio.h>
#include <stdlib.h>

int main(){
    int tab[15];
    unsigned int nb_case;
    int i,max;

    printf("\nNombre de cases :");
    scanf("%d",&nb_case);

    for ( i = 0; i < nb_case; i++)
    {
        printf("TAB[%d] = ",i);
        scanf("%d",&tab[i]);
    }
    max = tab[0];
    for ( i = 1; i < nb_case; i++)
    {
        if (max < tab[i])
        {
            max = tab[i];
        }
        
    }
    printf("Le nombre max est : %d",max);
}