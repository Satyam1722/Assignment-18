#include<stdio.h>
#include<string.h>

void upper(char a[]){
 for(int i=0;a[i];i++){
    if(a[i]>=97 && a[i]<=122)
        a[i]-=32;
 }

}

int main(){
 char a[100];
 printf("write something : ");
 fgets(a,100,stdin);
 upper(a);
 printf("%s",a);
return 0;
}

