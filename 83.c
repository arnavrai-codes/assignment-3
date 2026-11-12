#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    printf("enter string:");
    fgets(str,50,stdin);
    int len,temp;
    len=(strlen(str)-1);
    for(int i=0;i<len;i++){
        for(int j=0;j<len-i-1;j++){
            if(str[j]>str[j+1]){
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    puts(str);
}