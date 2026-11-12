#include <stdio.h>
#include <string.h>
int main(){
    char str[20],revstr[20];
    int l,i;
    printf("enter string\n");
    fgets(str,20,stdin);
    l=strlen(str);
    l-=1;
    str[l]='\0';
    l-=1;
    for(i=0;l>=0;i++,l--){
        revstr[i]=str[l];
    }
    revstr[i]='\0';
    if(strcmp(str,revstr)==0){
        printf("string is pallindrome");
    }
    else{
        printf("string is not a pallindrome");
    }
}