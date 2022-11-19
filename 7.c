#include<stdio.h>
#include<string.h>

int palindrome(char s[]){
int i,flag=0,n;
n=strlen(s);
for(i=0;i<n;i++){
    if(s[i]!=s[n-1-i]){
        flag=1;
        break;
    }
}
return flag;
}

int main(){

 char s[100];
 scanf("%s",&s);
 if(palindrome(s))
    printf("not a palindrome number\n");
 else
    printf("Palindrome number\n");


return 0;
}
