#include<stdio.h>

int len(char s[]){
 int  i;
 for(i=0;s[i];i++);
 return i;
}

int main(){
 char str[100];
 printf("write something : ");
 fgets(str,100,stdin);
 printf("length is : %d\n",len(str));
return 0;
}
