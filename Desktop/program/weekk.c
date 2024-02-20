#include<stdio.h>
int main(){
     int week;
    printf("Enter week name :");
    scanf("%d",&week);

    if(week == 1){
        printf(" monday %d ",week);
    }
    else if (week == 2)
    {
        printf(" tuesday %d ",week);
    }
    else if (week == 3)
    {
        printf(" wednesday %d ",week);
    }
    else if (week == 4)
    {
        printf(" thursday %d ",week);
    }
    else if (week == 5)
    {
        printf(" friday %d ",week);
    }
    else if (week == 6)
    {
        printf(" saturday %d ",week);
    }
    else if (week == 7)
    {
        printf(" sunday %d ",week);
    }
    else{
        printf("invalid number! please enter the 1 to 7 number ");
    }

    return 0;
}