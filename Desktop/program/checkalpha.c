#include<stdio.h>
int main(){
    char c;
    printf("Enter the charecter :");
    scanf("%c",&c);

    if(c>= 'a' && c<='z'|| c>='A' && c<='Z'){
    printf("%c charcter is valid ",c);
    }
    else{
        printf(" %c charcter is not valid " ,c);
    }
    return 0;
}