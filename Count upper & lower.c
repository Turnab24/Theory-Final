#include<stdio.h>
#include<ctype.h>
 int main(){
    char str [100];
    int upper=0,lower=0;

    printf("enter a string:");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
            if(str[i]>='A' && str[i]<='Z'){
                upper++;
            }
            else if(str[i]>='a' && str[i]<='z'){
                lower++;
            }
    }
    printf("total uppercase: %d\n",upper);
    printf("total lowercase: %d",lower);



 return 0;
 }
