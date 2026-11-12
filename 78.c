#include <stdio.h>
int main(){
    char str[50],key;
    int flag=0;
    printf("enter string:\n");
    fgets(str,50,stdin);
    printf("enter key element\n");
    scanf("%c",&key);
    for(int i=0;str[i]!='\n';i++){
        if(str[i]==key){
            flag=1;
        }
    }
    if(flag==1){
        printf("character found");
    }
    else{
        printf("character not found");
    }
}