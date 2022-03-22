#include<stdio.h>
#include<math.h>
void input_line(float*x1,float*y1,float*x2,float*y2,float*x3,float*y3)
{
  printf("enter the first coordinate:\n");
  scanf("%f%f",x1,y1);
  printf("enter the second coordinate:\n");
 scanf("%f%f",x2,y2);
 printf("ente the third coordinates:\n");
 scanf("%f%f",x3,y3);
}

int lengthofsides (float x1, float y1, float x2, float y2)
{
int area;
area=sqrt((x2-x1)*(x2-x1)-(y2-y1))*(y2-y1);
return area;
}

int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float a,b,c;
  a=lengthofsides(x1,y1,x2,y2);
  b=lengthofsides(x3,y3,x2,y2);
  c=lengthofsides(x3,y3,x1,y1);
  if((a+b)>c&&(b+c)>a&&(c+a)>b)
  
  {
    return 1;
  }
 
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
  if (result==1)
  {
  printf("its triangle\n");
  }
  else 
  {
    printf("its not a triangle\n");
  }
}
int main ()
{
float x1,y1,x2,y2,x3,y3,result;
input_line(&x1,&y1,&x2,&y2,&x3,&y3);
result=is_triangle(x1,y1,x2,y2,x3,y3);
output(x1,y1,x2,y2,x3,y3,result);
return 0;
}


