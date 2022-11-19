#include<stdio.h>
#include<string.h>

int comp(char a[],char b[]){
 int i;
 for(i=0;i<=strlen(a) && i<=strlen(b);i++){
    if(a[i]>b[i])
        return 1;
    else if(a[i]<b[i])
        return -1;
 }
 return 0;
}

int main(){
 char a[100],b[100];
 printf("write something : ");
 fgets(a,100,stdin);
 printf("write something : ");
 fgets(b,100,stdin);
 printf("comp %d",comp(a,b));
return 0;
}

