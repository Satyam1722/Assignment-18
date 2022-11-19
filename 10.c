#include<stdio.h>
#include<string.h>

void rep(char s[])
{
    int n=strlen(s),i,a[26]= {0};
    for(i=0;i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z')
            a[s[i]-97]++;
    }

    for(i=0;i<26;i++)
    if(a[i]>1)
        printf("%c \n",i+97);
}

int main()
{
    char s[100];
    fgets(s,100,stdin);
    s[strlen(s)-1]='\0';
    rep(s);
    return 0;
}
