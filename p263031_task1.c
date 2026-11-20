#include<stdio.h>
int main()
{
int age;
float cgpa;
char grade;

int *pAge;
float *pCgpa;
char *pGrade;

printf("Enter your age: ");
scanf("%d", &age);

printf("Enter your CPGA: ");
scanf("%f", &cgpa);

printf("Enter Grade: ");
scanf(" %c", &grade);

pAge = &age;
pCgpa = &cgpa;
pGrade = &grade;

printf("Age = %d\t", age);
printf("Via Pointer = %d\t", *pAge);
printf("&age = %p\t\t", &age);
printf("pAge = %p\n", pAge);

printf("CGPA = %.2f\t", cgpa);
printf("Via Pointer = %.2f\t", *pCgpa);
printf("&cgpa = %p\t\t", &cgpa);
printf("pCgpa = %p\n", pCgpa);

printf("Grade = %c\t", grade);
printf("Via Pointer = %c\t\t", *pGrade);
printf("&grade = %p\t\t", &grade);
printf("pGrade = %p\n", pGrade);


printf("&pAge =%p\t &pCgpa = %p\t &pGrade= %p\n", &pAge, &pCgpa, &pGrade);

*pAge = age+1;
*pCgpa = cgpa + 0.25;
*pGrade = grade+1;

printf("After changing through Pointers:\nAge= %d, CGPA =%.2f, Grade = %c",age, cgpa, grade);

return 0;
}







