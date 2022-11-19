#include<stdio.h>
#include<string.h>

int alpha_numeric(char a[]){
    int al=0,d=0;
 for(int i=0;a[i];i++){
    if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
    al++;
    if(a[i]>='0' && a[i]<='9')
    d++;
    if(al>0 && d>0)
    return 1;
 }
 return 0;

}

int main(){
 char a[100];
 printf("write something : ");
 fgets(a,100,stdin);
 if(alpha_numeric(a))
    printf("Alphanumeric string\n");
 else
    printf("Not a Alphanumeric string\n");

return 0;
}


