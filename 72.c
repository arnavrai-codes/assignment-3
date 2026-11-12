#include <stdio.h>
int main(){
    char str[50];
    printf("enter string:");
    fgets(str,100,stdin);
    int count=0;
    for(int i=0;str[i]!='\n';i++){
        count++;
    }
    printf("%d",count);
}