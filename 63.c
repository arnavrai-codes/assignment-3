#include <stdio.h>
void exchange(int x,int y);
int main(){
    int x,y;
    printf("enter x and y");
    scanf("%d%d",&x,&y);
    exchange(x,y);
}
void exchange(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("x is :%d and y is:%d\n",x ,y);
}