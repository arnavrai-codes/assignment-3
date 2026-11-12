#include <stdio.h>
int prime(int n);
int main(){
    int n;
    printf("enter argument");
    scanf("%d",&n);
    printf("%d",prime(n));
}
int prime(int n){
    int flag=1;
    for(int i=2;i<n && flag==1;i++){
        if(n%i==0){
            flag=0;
        }
    }
    return flag;
}