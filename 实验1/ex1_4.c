/*��1+1/3+1/5+...����ǰn���*/
#include<stdio.h>
int main(void)
{
    int n,i,denominator;     //denominator ������ĸ 
    double sum;
        i = 1;
        sum = 0;
        denominator = 1;
     scanf("%d",&n) ;
     for (i=1;i<=n;i++)
	 {
	 	sum = sum+1.0/denominator;
	 	denominator = denominator+2;
	 }
	 printf("sum=%f",sum);
	
	 return 0;
 } 
