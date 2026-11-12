#include <stdio.h>
#include <string.h>
int main(){
    char str[50],target,value;
    printf("enter string\n");
    fgets(str,50,stdin);
    printf("enter character to be replaced:\n");
    scanf("%c",&target);
    printf("enter character to be replaced with:\n");
    scanf(" %c",&value);
    for(int i=0;str[i]!='\n';i++){
        if(str[i]==target){
            str[i]=value;
        }
    }
    puts(str);
}
