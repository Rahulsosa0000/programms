#include<stdio.h>
#define PI 3.14
#define a 1.33
int main()
{
    float r=0;
    printf("Enter the radius :");
    scanf("%f",&r);

    float sphere=a*PI*r*r*r;
    printf("volume of sphere :%f",sphere);



    return 0;

}