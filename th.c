#include<stdio.h>
void main()
{
int a,b,c;
printf("enter three num");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
printf("%d is greatest num\n",a);
else if((b>c)&&(b>a))
printf("%d is greatest num\n",b);
else
printf("%d is greatest num\n",c);
}

