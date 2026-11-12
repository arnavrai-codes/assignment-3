#include <stdio.h>
int NCR(int n);
int main(){
    int n,r,result;
    printf("enter n and r:");
    scanf("%d%d",&n,&r);
    result=NCR(n)/(NCR(r)*NCR(n-r));
    printf("%d",result);
}
int NCR(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        num=num*i;
    }
    return num;
}