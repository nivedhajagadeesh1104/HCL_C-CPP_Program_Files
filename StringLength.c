#include<stdio.h>
int main()
{
    char str[1000];
    fgets(str,sizeof(str),stdin);
    int length=0;
    int i=0;
    while(str[i]!='\0'){
        length++;
        i++;
    }
    if(str[length-1]=='\n')
    length-=1;
    printf("%d",length);
}