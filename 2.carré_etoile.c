int main(void)
{
    unsigned long long largeur =0 , longueur = 0;

    printf("Entrer la largeur : ");
    scanf("%d",&largeur);
    printf("Entrer la longeur : ");
    scanf("%d",&longueur);

    for (int i = 0; i < longueur; i++)
    {
        for (int j = 0; j < largeur; j++)
        
            printf("*");
        putchar('\n');   
    }
}