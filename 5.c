#include<stdio.h>
#include<string.h>

void lower(char a[]){
 for(int i=0;a[i];i++){
    if(a[i]>=65 && a[i]<=90)
        a[i]+=32;
 }

}

int main(){
 char a[100];
 printf("write something : ");
 fgets(a,100,stdin);
 lower(a);
 printf("%s",a);
return 0;
}

