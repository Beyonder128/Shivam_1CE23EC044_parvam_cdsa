#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    printf("%c \n",ch);
    char s[20];
    scanf("%s",&s);
    printf("%s",s);
    char l[20];
    scanf("\n");
    scanf("%[^\n]%*c",&l);
    printf("%s",l);
}