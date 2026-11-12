#include <stdio.h>
#include <string.h>
int main(){
    char names[5][50],temp[50];
    printf("enter names\n");
    for(int i=0;i<5;i++){
        fgets(names[i],sizeof(names[i]),stdin);
    }
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            if(strcmp(names[i],names[j])>0){
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }
    for(int i=0;i<5;i++){
        fputs(names[i],stdout);
    }
}