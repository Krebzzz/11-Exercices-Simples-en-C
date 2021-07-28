#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[100];
    int i;
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if( 'a'<=s[i] && s[i]<='z' )
        {
            s[i]=s[i]-'a'+'A';
            continue;
        }
        if( 'A'<=s[i] && s[i]<='Z' )
            s[i]=s[i]-'A'+'a';   
    }
    puts(s);
    system("pause");
    return 0;
}