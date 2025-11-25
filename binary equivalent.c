#include<stdio.h>
int main()
{
int num,i;
printf("Enter a number:");
scanf("%d",&num);
if(num<0||num>255)
{
printf("invalid number.\n");
return 1;
}
printf("binary equivalent of %d is:",num);
for(i=7;i>=0;i--)
{
int bit=(num>>i)&1;
printf("%d",bit);
}
printf("\n");
return 0;
}

