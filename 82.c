#include <stdio.h>
int main(){
    char str[50];
    printf("enter text:\n");
    fgets(str,50,stdin);
    int countchar=0,countword=0;
    for(int i=0;str[i]!='\0';i++){
        countchar++;
        if(str[i]==' '|| str[i]=='\n'){
            countword++;
        }
    }
    printf("characters: %d\n",countchar);
    printf("words: %d\n",countword);
}