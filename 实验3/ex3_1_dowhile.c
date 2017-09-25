#include<stdio.h>
int main (void)
{
	int i=0, n,sum=0;
	    
		printf("ÇëÊäÈëÕûÊın£º");
	    scanf ("%d",&n);
	
	do
	 {
	   sum = sum+i;
	    i++;	
     } while (i<=n);
	printf("%d",sum);
	
	return 0;
}
