#include<stdio.h>
int main()
{
    int number=0;
    printf("Enter the number :");
    scanf("%d",&number);

if(number % 2==0)
{
    printf("number is even %d :",number);
}
 
else{
     printf("number is odd  :%d",number);
}

    return 0;
}