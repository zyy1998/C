       /*��һ����λ���ĸ�λ����*/
#include<stdio.h>
int main(void)
{
	int n,digit1,digit2,digit3; 
	
      	scanf("%d",&n);
	
	    digit1 = n%10;               //�����λ���� 
	    digit2 = (n/10)%10;          //����ʮλ���� 
	    digit3 = n/100;              //�����λ���� 
	
	if(99<n&&n<1000)
	     printf("����%d�ĸ�λ������%d��ʮλ������%d����λ������%d",n,digit1,digit2,digit3);
	else
	     printf("������Ĳ�����λ��");
	
	return 0; 
	
}
