#include <stdio.h>
int main(){
    char str[50];
    printf("enter string:\n");
    fgets(str,50,stdin);
    for(int i=0;str[i]!='\n';i++){
        int ascii=str[i];
        str[i]=ascii-32;
    }
    puts(str);
}