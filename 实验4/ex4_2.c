#include <stdio.h>
int fib(int i);
int main(void)
{
 int a,m,n,fibonacci;

  scanf("%d%d", &m, &n);
  a=1;
  while(fib(a)<=n)
  {
    fibonacci=fib(a);
    if(fibonacci>=m) printf("%d ",fibonacci);   
    a++;
  }
 printf("\n");
}

int fib(int i)
{
 int b,x1,x2,x;
 if(i==1||i==2)
   x=1;
 else{    
   x1=x2=1;
   for(b=1;b<=i-2;b++)
    {
     x=x1+x2;
     x1=x2;
     x2=x;
    }
 }
 return x;
}
