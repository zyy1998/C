#include<stdio.h>
int main (void)
{
	int n,i,num,min;
	scanf ("%d\n",&n);
	scanf ("%d",&num);
	min = num;
	for(i=1;i<n;i++)
	{
	scanf("%d",&num);
	if (num<min)
	min = num;
	}
	    printf("min = %d",min);
	
	return 0;
}
