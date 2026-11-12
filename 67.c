#include <stdio.h>
int max(int a[],int n);
int main(){
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("maximmum element is:%d",max(a,n));
}
int max(int a[],int n){
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>a[0]){
            max=a[i];
        }
    }
    return max;
}