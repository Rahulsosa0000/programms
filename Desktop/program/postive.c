#include<stdio.h>
int main()
{
    int number = 0;

 printf("enter the number:");
 scanf("%d",&number);
 
 if(number>=0)
 {
    printf("number is positive :%d",number);

 }
 else{
    printf("number is negative %d :",number);
 }

    return 0;
}