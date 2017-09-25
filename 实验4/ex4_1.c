#include<stdio.h>
#include<math.h>
int prime(int x);
int main(void)
{
	int m,n,x,i,count=0,sum=0;
	scanf ("%d%d",&m,&n);
	
	for(x=2;x>=m&&x<=n;x++)
	{
		if(prime(x)==1)
		{
			sum = sum+x;
			count ++;
		}
	}
	
	printf ("count=%d,sum=%d",count,sum);
	
	return 0;
}

int prime(int x)
{
	int i,n;
	
	if(x==1) return 0;
	n=sqrt(x);
	for(i=2;i<=n;i++)
	  if(x%i==0)
		  {
		  return 0;
		  }
	return 1;
}
