#include <stdio.h>
void pallindrome(int n);
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    pallindrome(n);
}
void pallindrome(int n){
    int q,sum=0,temp;
    temp=n;
    for(int i=1;n!=0;i++){
        q=n%10;
        sum=(sum*10)+q;
        n=n/10;
    }
    if(sum==temp){
        printf("number is a pallindrome");
    }
    else{
        printf("number is not a pallindrome");
    }
}