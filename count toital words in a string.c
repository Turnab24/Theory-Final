#include<stdio.h>
int main(){
    char str[100];
    int count=0;
    printf("enter a string=");
    gets(str);
    for(int i=0;str[i]!='0';i++){
        if(str[i]==' '){
            count++;
        }
    }

    printf("total words= %d",count+1);


    return 0;
}
