
//isalpha : savoir si le caractère est alphabétique ou non // #include <ctype.h>

int i = 0;
    char str[250] = "";
   
    printf("Please enter sentence : ");
    scanf("%s",str);

    while (str[i])
    {
        if (isalpha(str[i])) printf("The character %c is alphabetic\n",str[i]);
        else
            printf("The character %c is not alphabetic\n",str[i]);
        i++;      
    }
    return 0;