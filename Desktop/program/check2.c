#include<stdio.h>
int main(){
    char c;
    printf("Enter any :");
    scanf("%c",&c);

    if(c>= 'a' && c<='z'|| c>='A' && c<='Z'){
    printf(" %c this is alphabet ",c);
    }
    else if(c>='0' && c<='9'){
    printf(" %c this is digit", c);
    }
    else{
        printf(" %c this is specialcharcter",c);
    }
    return 0;

}