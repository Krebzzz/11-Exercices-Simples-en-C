#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//-----------------------------------------------------
int main(int argc, char *argv[])
{
    float tab[14];
    unsigned int nb_case;
    int i;
    float somme, moyenne;

    printf("\nNombre de cases :");
    scanf("%d",&nb_case);

    for ( i = 0; i < nb_case; i++)
    {
        printf("TAB[%d] = ",i);
        scanf("%f",&tab[i]);
    }

    somme = 0;
    for ( i = 0; i < nb_case; i++){
        somme += tab[i];
    }   
    moyenne = somme/nb_case;
    printf("L'addition des nombres = %.2f \nLa moyenne est de : %.2f",somme,moyenne);
    return 0;
}
 