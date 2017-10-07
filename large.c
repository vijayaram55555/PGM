#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
printf("large numb is %d",a);
else if((b>a)&&(b>c))
printf("large num is %d",b);
else
printf("large num is %d",c);
}
