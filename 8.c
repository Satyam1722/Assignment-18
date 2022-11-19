#include<stdio.h>
#include<string.h>

int word(char s[]){
int i,count=0,n;
n=strlen(s);
for(i=0;i<n;i++){
    if(s[i]==' ')
        count++;
}
return count+1;
}

int main(){

 char s[100];
 fgets(s,100,stdin);
 printf("Words is : %d\n",word(s));


return 0;
}

