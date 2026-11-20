
#include <stdio.h>
void ptr(float r,float *area,float *circum);
int main()
{
float r, area, circum;

printf("Enter radius: ");
scanf("%f",&r);

while(r<0)
 {
  printf("Radius cannot be Negative\n");
  printf("Enter radius: ");
  scanf("%f", &r);
 }
ptr(r, &area, &circum);

printf("Area: %.2f\n",area);
printf("Circumference: %.2f\n",circum);

return 0;
}

void ptr(float r,float *area,float *circum)
{
 *area= 3.14159*r*r;
 *circum= 2*3.14159* r;
 return;
}
