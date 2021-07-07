#include <stdio.h>
#include <math.h>
float bisec(float a, float b, float e, float e1);
float f( float x);
int sign(float x);
int main(void)
{
 printf("x = %f",bisec(-2, -1, 0.0001, 0.0001));
 getch();
}
float f( float x)
{
 return logl(x+3)+sin(x+1);
}
int sign(float x)
{
 int res;
 res=0;
 if (x<0) res=-1;
 if (x>0) res= 1;
 return res;
}
float bisec(float a, float b, float e, float e1)
{
float x;
while (b-a>e)
 {
 x=(a+b)/2;
 if (fabs(f(x))<e1) break;
 if (sign(f(a))==sign(f(x))) a=x;
 else b=x;
 }
 return x;
}
