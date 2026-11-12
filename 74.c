#include <stdio.h>
int main(){
    char str1[50],str2[20];
    printf("enter first string:");
    fgets(str1,50,stdin);
    printf("enter second string:");
    fgets(str2,20,stdin);
    int len=0;
    for(int i=0;str1[i]!='\n';i++){
        len++;
    }
    int j,i;
    for(i=0,j=len;str2[i]!='\n';i++,j++){
        str1[j]=str2[i];
    }
    str1[j]='\0';
    puts(str1);
}