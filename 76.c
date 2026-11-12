#include <stdio.h>
#include <string.h>
int main(){
   char str[50],revstr[50];
    printf("enter string:");
    fgets(str,50,stdin);
    int count=0;
    for(int i=0;str[i]!='\n';i++){
        count++;
    }
    int i,j;
    for(i=0,j=count-1;j>=0;i++,j--){
        revstr[i]=str[j];
    }
    revstr[i]='\0';
    puts(revstr);
}