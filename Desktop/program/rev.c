#include<stdio.h>
int main(){

    int number=0;
    int rev=0;
    int rem=0;
    printf("Enter the nuber :%d",number);
    while(number>0)
    {
        rem=number%10;
        rev=rev*10+rem;
        number=number/10;
    
    }
         printf("reverse of number :%d",rev);
        
 return 0;
}