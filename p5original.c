#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the array size:\n");
  scanf("%d",&n);
  return n;
}
void init_array(int n, int a[n]
{
  for(int i=0;i<n;i++)
    a[i]= i;
  a[1]=0;
}
void erotosthenes_sieve(int n, int a[n])
{
  int i=0;
  while(i< sqrt(n))
    {
      while(a[i]==0)i++;
      for(int k=i+i;i<n;k+=i)
        a[k]=0;
      i++
    }
}
void out_put(int n, int a[n])
{
  printf("the %d erotosthenes sieve is %d",n,a[n]);
}
int main()
{
  int 
}