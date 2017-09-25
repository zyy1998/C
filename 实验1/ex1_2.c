       /*求一个三位数的各位数字*/
#include<stdio.h>
int main(void)
{
	int n,digit1,digit2,digit3; 
	
      	scanf("%d",&n);
	
	    digit1 = n%10;               //计算个位数字 
	    digit2 = (n/10)%10;          //计算十位数字 
	    digit3 = n/100;              //计算百位数字 
	
	if(99<n&&n<1000)
	     printf("整数%d的个位数字是%d，十位数字是%d，百位数字是%d",n,digit1,digit2,digit3);
	else
	     printf("您输入的不是三位数");
	
	return 0; 
	
}
