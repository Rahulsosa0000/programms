#include<stdio.h>
int main(){

    int number=0;
    int fact=1;
    int i=0;

    printf("enter the number :");
    scanf("%d",&number);
    for(i=number; i>=1; i--){
        fact=fact*i;
    }
    printf("factorial is :%d",fact);
    
    return 0;
}