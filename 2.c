#include<stdio.h>
#include<string.h>

void rev(char str[]){
 int n=strlen(str);
 int i,j;
 for(i=0,j=n-1;i<j;i++,j--){
    int temp=str[i];
    str[i]=str[j];
    str[j]=temp;
 }
}

int main(){
 char str[100];
 printf("write something : ");
 fgets(str,100,stdin);
 rev(str);
 printf("%s",str);
return 0;
}
