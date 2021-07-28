int main(void)
{
    int i, j;
    char c;
    char chaine[250];
    printf("Entrer une chaine :");
    fgets(chaine,250,stdin);
    printf("Quel est le caractere a supprimer ? ");
    scanf("%c",&c);
    for ( i = 0; i < strlen(chaine); i++)
    {
        if (chaine[i] == c)
        {
            for ( j = i; j < strlen(chaine); j++)
            {
                chaine[j] = chaine[j +1];
                i--;
            }
            
            
        }
    }
    puts(chaine);
}    