#include <stdio.h>
#include <math.h>
void armstrong(int n);
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    armstrong(n);
}
void armstrong(int n){
    int q,sum=0,temp,count=0;
    temp=n;
    for(int i=1;n!=0;i++){
        n=n/10;
        count++;
    }
    n=temp;
    for(int i=1;n!=0;i++){
        q=n%10;
        sum=sum+pow(q,count);
        n=n/10;
    }
    if(sum==temp){
        printf("number is a armstrong number");
    }
    else{
        printf("number is not a armstrong number");
    }
}