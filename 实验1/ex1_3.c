       /*������ݵ��*/ 
#include<stdio.h>
int main(void)
{
	int ydl;
	double df;
	
	scanf("%d",&ydl);          //ydlΪ�õ���
	
	if (ydl <= 50)
		df = 0.53*ydl;         //dfΪ��� 
   	else
		df = 50*0.53+(0.53+0.05)*(ydl-50);
	printf("cost=%.2f",df);
	
	return 0;
}
