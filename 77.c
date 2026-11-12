#include <stdio.h>
#include <string.h>
int main(){
    char str[20],copied[20],str1[20],str2[20],st1[20],st2[20];
    int len;
    printf("enter string\n");
    fgets(str,20,stdin);
    printf("length\n");
    len=(strlen(str)-1);
    printf("length=%d\n",len);
    printf("copy\n");
    strcpy(copied,str);
    printf("copied string\n");
    puts(copied);
    printf("concatination\n");
    printf("enter string 1:");
    gets(str1);
    printf("enter string 2:");
    gets(str2);
    printf("concatinated string:");
    strcat(str1,str2);
    puts(str1);
    printf("compare\n");
    printf("enter string 1:");
    fgets(st1,20,stdin);
    printf("enter string 2:");
    fgets(st2,20,stdin);
    int compare= strcmp(str1,str2);
    printf("%d",compare);
}