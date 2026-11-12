#include <stdio.h>
void fibonacci(int n);
int main(){
    int n;
    printf("enter the N:");
    scanf("%d",&n);
    fibonacci(n);
}
void fibonacci(int n){
    int a=0,b=1,c;
    if(n>=0){
        printf("%d\t",a);
    }
    if(n>=1){
        printf("%d\t",b);
    }
    for(int i=2;i<=n;i++){
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
}