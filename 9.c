#include<stdio.h>
#include<string.h>

void rev_word(char s[])
{
    char a[100][100];
    int i=0,c=0,j=0;

    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {

            a[c][j]='\0';
            c++;
            i++;
            j=0;
        }
        a[c][j]=s[i];
        i++;
        j++;

    }
    a[c][j]=='\0';
    for(i=c; i>=0; i--)
        printf("%s ",a[i]);

}


int main()
{

    char s[100];
    gets(s);

    rev_word(s);

    return 0;
}




