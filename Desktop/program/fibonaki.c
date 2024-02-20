#include<stdio.h>
int main()
{
    int number=0;
    int i=0;
    int a=0;
    int b=1;
    int c=0;
    printf("Enter the number :");
    scanf("%d",&number);

    for(i=1; i<number; i++){
        printf("%d ", a );
        c=a+b;
        a=b;
        b=c;
    }

    return 0;

}