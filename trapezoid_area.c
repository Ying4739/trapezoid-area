#include <stdio.h>

int main(void)
{
int a, b, c, d;
printf("input the topline, baseline and height:\n");
scanf("%d %d %d",&a,&b,&c);
d=((a+b)*c)/2;
printf("area = %d\n",d);  
return 0;
}
