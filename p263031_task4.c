
#include <stdio.h>
void convertTime(int tSec,int *h,int *m,int *s);
void addSeconds(int *h,int *m,int *s,int extra);
int main()
{
int tSec, h, m, s, extra;

printf("Enter Seconds: ");
scanf("%d", &tSec);

convertTime(tSec, &h, &m, &s);

printf("Time: %02d:%02d:%02d\n", h, m, s);
printf("Enter seconds that you want to add: ");
scanf("%d", &extra);

addSeconds(&h, &m, &s, extra);

printf("New time: %02d:%02d:%02d\n", h, m, s);

return 0;
}

void convertTime(int tSec,int *h,int *m,int *s)
{
*h= tSec/3600;
*m= (tSec%3600)/60;
*s=tSec%60;

return;
}

void addSeconds(int *h,int *m,int *s,int extra)
{
int t;

t=(*h *3600)+ (*m *60)+*s;
t=t+extra;

convertTime(t, h, m, s);

return;
}
