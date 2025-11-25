#include<stdio.h>
int main()
{
int n,sum=0,r,armstrong;
printf("enter number n:");
scanf("%d",&n);
armstrong=n;
while(n!=0)
{
r=n%10;
sum=sum+r*r*r;
n=n/10;}
if(armstrong==sum)
printf("%d the given number is armstrong number",r);
else
printf("%d not an armstrong number",r);
return 0;
}
