#include<stdio.h>
void main()
{
char a;
scanf("%c",&a);
if((a>'a')&&(a<'z')||(a>'A')&&(a<'Z'))
printf("it is char");
else
printf("it is not char");
}
