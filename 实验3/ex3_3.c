#include<stdio.h>
int main (void)
{   int money,fen5,fen2,fen1,total,count=0;
	scanf("%d",&money);
	if (money>8 && money<100)
	{
	 
	   
	    for(fen1=1;fen1<=100;fen1++)
	    for(fen2=1;fen2<=50;fen2++)
	    for(fen5=1;fen5<=20;fen5++) 
	  {
	       if(fen5*5+fen2*2+fen1==money)
	       {
	       count++;
		   total=fen5+fen2+fen1;
	       printf("fen5:%d,fen2:%d,fen1:%d,total:%d\n",fen5,fen2,fen1,total);
	       }
	  }
	  printf("count = %d",count);
	}
	else 
	printf("输入的数字超过范围"); 
	return 0;
}
