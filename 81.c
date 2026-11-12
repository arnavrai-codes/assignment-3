#include <stdio.h>
int main(){
    char str[50];
    printf("enter text:\n");
    fgets(str,50,stdin);
    int p,q,r,s;
    p=q=r=s=0;
    for(int i=0;str[i]!='\n';i++){
        if(str[i]>='a' && str[i]<='z'){
            p++;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            q++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            r++;
        }
        else{
            s++;
        }
    }
    printf("lower case letters appeared: %d times\n",p);
    printf("upper case letters appeared: %d times\n",q);
    printf("digits appeared: %d times\n",r);
    printf("special symbols appeared: %d times\n",s);
}