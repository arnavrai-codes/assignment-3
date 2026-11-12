#include <stdio.h>
int main(){
    char str1[20],str2[20];
    int strcmp,flag=0;
    printf("enter first string\n");
    fgets(str1,20,stdin);
    printf("enter second string\n");
    fgets(str2,20,stdin);
    for(int i=0;str1[i]!='\n'&& str2[i]!='\n';i++){
        if(str1[i]!=str2[i]){
            strcmp=str1[i]-str2[i];
            flag=1;
            break;
        }
        else{
            flag=0;
        }
    }
    //Testing git commit
    if(flag==1){
        printf("strcmp=%d",strcmp);
    }
    else{
        printf("strcmp=%d",flag);
    }
}