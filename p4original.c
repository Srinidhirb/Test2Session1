#include<stdio.h>
int input()
{
  int n;
  printf("enter value:\n");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
 int a=0,b=1,c;
  for(int i=2;i<=n-1;i++)
  {
    c=a+b;
    a=b;
    b=c;
  }    
  return c;
}
void output(int n,int fibo)
{
  printf("The %d number in Fibonacci series is %d",n,fibo);
}
int main()
{
  int a,b;
  a=input();
  b=find_fibo(a);
  output(a,b);
  return 0;
}