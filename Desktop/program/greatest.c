#include<stdio.h>
int main()
{
    int first=0;
    int second=0;
    int third=0;
    printf("enter the first number :");
    scanf("%d",&first);
    printf("enter the second number :");
    scanf("%d",&second);
    printf("enter the third number :");
    scanf("%d",&third);

    if (first > second && first >third)
    {
        printf("the gretest number is first :%d",first);
    }

    else if (second > third)
     {
        printf("the gretest number is second :%d",second);
     } 
     else
     {
        printf("the gretest number is third ");
     }   

    return 0;

}