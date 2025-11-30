#include<stdio.h>
int main(){
    char str[100];
    int alphabets=0,digits=0,characters=0;
    printf("enter a string=");
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    printf("len=%d\n",len);
    for(int i=0;i<len;i++){
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){
            alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            digits++;
        }
        else{
            characters++;
        }
    }

    printf("total alpha= %d\n",alphabets);
     printf("total digit= %d\n",digits);
      printf("total character= %d",characters-1);

    return 0;
}

