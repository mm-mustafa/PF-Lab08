#include <stdio.h>
#include <math.h>
int solveQuadratic(double a,double b,double c,double *r1,double *r2);
int main()
{
double a, b, c, r1, r2;
int n;

printf("Enter value of a: ");
scanf("%lf",&a);
printf("Enter b's value: ");
scanf("%lf",&b);
printf("Enter c's value: ");
scanf("%lf",&c);

n =solveQuadratic(a,b,c,&r1,&r2);

if (n==2)
 printf("Two roots: %.2f and %.2f\n",r1,r2);
else if (n==1)
 printf("One root: %.2f\n",r1);
else
 printf("No real roots\n");

return 0;
}

int solveQuadratic(double a,double b,double c,double *r1,double *r2)
{
double d=b*b - 4*a*c;

if (d<0)
 return 0;

if (d== 0)
 {
  *r1= -b/(2*a);
  return 1;
 }

*r1 = (-b +sqrt(d))/(2*a);
*r2 = (-b- sqrt(d))/(2*a);
return 2;
}
/*A function can only return one value, so the count goes into return and the roots come back through pointers.The count tells main which one to use*/