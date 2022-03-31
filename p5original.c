#include<stdio.h>
#include<math.h>
int input_array_size()
{
  int n;
  printf("enter the array size:\n");
  scanf("%d",&n);
  return n;
}
void erotosthenes_sieve (int n, int a[n])
{
  for(int i=2;i<=sqrt(n);i++)
  if(a[i]==0)
  {
    for(int j=i*i;j<=n;j+=i)
      {
        a[j]=1;
      }
    }
}
void output(int n, int a[n])
{
  for(int i=2;i<=n;i++)
    {
      if(a[i]==0)
      {
        printf("%d",i);
      }
    }
  }
int main()
{
  int n;
  n=input_array_size();
  int a[100]={0};
  erotosthenes_sieve(n,a);
  output(n,a);
  return 0;
}