#include<stdio.h>
int main()
{ 
    int b=0;
    int h=0;
    printf("Enter the breadth :");
    scanf("%d",&b);
    printf("Enter the hieght :");
    scanf("%d",&h);

    int area=b*h/2;
    printf("area of triangle: %d",area);
    return 0;

}