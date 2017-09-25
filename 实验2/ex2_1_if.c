#include<stdio.h>
int main (void)
{
    int salary;
    double tax;
    scanf("%d",&salary);

if(salary<=1600)
tax=0;
     else if(1600<salary&&salary<=2500)
tax=0.05*(salary-1600);
else if(2500<salary&&salary<=3500)
tax=0.10*(salary-1600);
else if(3500<salary&&salary<=4500)
tax=0.15*(salary-1600);
  else
  tax=0.20*(salary-1600);

   printf("%.2f",tax);
	  
return 0;	
}

