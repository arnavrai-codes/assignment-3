#include <stdio.h>
int main(){
    char str[50],strcpy[50];
    printf("enter string");
    fgets(str,50,stdin);
    int i;
    for(i=0;str[i]!='\0';i++){
        strcpy[i]=str[i];
    }
    strcpy[i]='\0';
    printf("old string \n");
    puts(str);
    printf("new string\n");
    puts(strcpy);
}