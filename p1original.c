#include<stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("enter the first cordinates:\n");
  scanf("%f%f",x1,y1);
  printf("enter the second coordinate:\n");
  scanf("%f%f",x2,y2);
}
void find_distance(float x1, float y1, float x2, float y2, float *area)
{
  *area=sqrt((x2-x1)*(x2-x1)-(y2-y1))*(y2-y1);
}
void output(float x1, float y1,float x2, float y2, float area)
{
  printf("the distance between (%f,%f) and (%f,%f) is %f",x1,y1,x2,y2,area);
}
int main ()
{
  float a,b,c,d,area;
  input(&a,&b,&c,&d);
  find_distance(a,b,c,d,&area);
  output(a,b,c,d,area);
  return 0;
}