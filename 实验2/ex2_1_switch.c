#include<stdio.h>
int main (void)
{
   int salary,num;
   double tax;
   scanf("%d",&salary);
	 if(salary<=1600)
	   num=1;
     else if(1600<salary&&salary<=2500)
	   num=2;
	 else if(2500<salary&&salary<=3500)
	   	num=3;
	 else if(3500<salary&&salary<=4500)
	   num=4;
	 else
	   num=5;
	
	switch(num)
	{
		case 1:tax=0*(salary-1600);break;
		case 2:tax=0.05*(salary-1600);break;
		case 3:tax=0.10*(salary-1600);break;
		case 4:tax=0.15*(salary-1600);break;
		default:tax=0.20*(salary-1600);break;
	}

   printf("%.2f",tax);
	  
	
return 0;	
}
