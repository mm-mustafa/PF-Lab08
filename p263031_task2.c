#include <stdio.h>
void swap(int *x,int *y);
void sortThree(int *a, int *b, int *c);
int main()
{
int x, y, z;

printf("Enter 1st Number: ");
scanf("%d", &x);
printf("Enter 2nd Number: ");
scanf("%d", &y);
printf("Enter 3rd Number: ");
scanf("%d", &z);

printf("Before: %d %d %d\n",x,y,z);
sortThree(&x,&y,&z);

printf("After: %d %d %d\n",x,y,z);

return 0;
}

void swap(int *a,int *b)
{
int temp;

temp= *a;
*a= *b;
*b=temp;
return;
}

void sortThree(int *a,int *b,int *c)
{
 if(*a> *b)
  swap(a,b);

 if(*b> *c)
  swap(b,c);

 if(*a> *b)
  swap(a,b);
}