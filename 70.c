#include <stdio.h>
void vowel(char c);
int main(){
    char c;
    printf("enter character:");
    scanf("%c",&c);
    vowel(c);
}
void vowel(char c){
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            printf("character is vowel");
        }
        else{
            printf("character is consonant");
        }
    }
    else{
        printf("not valid entry");
    }
}