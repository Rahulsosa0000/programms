#include<stdio.h>
int main()
{
    int length=0;
    int breadth=0;
    printf("Enter the length :");
    scanf("%d",&length);
    printf("Enter the breadth :");
    scanf("%d",&breadth);

    int area= length*breadth;
    printf("Enter area of rectangle :%d",area);


    return 0;

}