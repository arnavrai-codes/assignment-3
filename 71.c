#include <stdio.h>
int linelen(char str[]);
int main(){
    char str[50];
    printf("enter line:\n");
    fgets(str,50,stdin);
    int result=linelen(str);
    printf("line you entered is:\n");
    puts(str);
    printf("length of line is %d",result);
}
int linelen(char str[]){
    int count=0;
    for(int i=0;str[i]!='\n';i++){
        count++;
    }
    return count;
}
