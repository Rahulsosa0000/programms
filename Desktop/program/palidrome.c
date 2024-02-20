#include<stdio.h>
int main(){
    int number=0;
    int rem=0;
    int rev=0;
    printf("Enter the number :");
    scanf("%d",&number);
    int temp=number;

    while(number>0)
    {
    rem=number%10;
    rev=rev*10+rem;
    number=number/10;
    }
    if (rev==temp)
    {
        printf("number is palidrome");
    }
    else
    {
        printf("number is not palidrom");
    }
    
    return 0;

}