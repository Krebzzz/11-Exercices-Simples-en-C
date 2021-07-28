#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char t[100][20];
    int i,n;
    char c;
    printf("Donnez le nombre des elements de la liste: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
       printf("Donnez le prenom numero %d: ",i+1);
       scanf("%s",t[i]);      
    }
    printf("Donnez un caractere: ");
    getchar();
    scanf("%c",&c);
    printf("Les prenoms qui commencent par %c sont:\n",c);
    for(i=0;i<n;i++)
    {
       if(t[i][0]==c) puts(t[i]);
    }
    system("pause");
    return 0;
}