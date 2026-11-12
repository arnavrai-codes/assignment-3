#include <stdio.h>
int main(){
    char str[50];
    printf("enter string:\n");
    fgets(str,50,stdin);
    int count=0;
    for(int i=0;str[i]!=0;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
        }
    }
    printf("there are %d vowels in string",count);
}