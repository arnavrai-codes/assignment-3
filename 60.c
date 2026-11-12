#include <stdio.h>
void EvenOrOdd(int n);
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    EvenOrOdd(n);
}
void EvenOrOdd(int n){
    if(n%2==0){
        printf("number is even");
    }
    else{
        printf("number is odd");
    }
}