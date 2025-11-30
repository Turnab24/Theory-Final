#include<stdio.h>
int main()
{
    char str[100],count=0;
    printf("enter a string:");
    fgets(str,sizeof(str),stdin);
    int len = strlen (str)-1;
    printf("len=%d\n",len);
    for(int i=0,j=len-1; i<len/2; i++,j--)
    {
        if(str[i]==str[j])
        {
            count=0;
        }
        else
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        printf("yes.");
    }
    else
    {
        printf("not.");
    }

    return 0;
}
