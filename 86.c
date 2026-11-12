#include <stdio.h>
int main(){
    char str[20];
    printf("enter name\n");
    fgets(str,20,stdin);
    for(int i=0;str[i]!='\n';i++){
        printf("%c\t%d\n",str[i],str[i]);
    }
}