#include<stdio.h>
int main()
{

     int salary=0;
     printf("Enter your salary in lakhs :");
     scanf("%d",&salary);

     if(salary>500000 && salary<1000000)
     {
        salary=salary-salary*0.1;
     }

     else if (salary>1000000 && salary<2000000)
     {
      salary=salary-salary*0.2;
     }

     else if (salary>2000000)
     {
       salary=salary-salary*0.3;
     }
     
     else{
      printf("no tax\n");
     }
     
     printf("salary after deduction is :%d\n",salary);

     float HRA=salary*0.1;
     float DA= salary*0.05;
     float PF= salary*0.03;

     float jetli_salary_vadhe_te =salary-(HRA+DA+PF);

     printf("apda hath ma aave te :%f",  jetli_salary_vadhe_te);
     

    return 0;
}