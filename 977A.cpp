//the.shoaib2
#include<stdio.h>
int main()
{
long int n;
int i,k;
scanf("%ld%ld",&n,&k);
for ( i = 0; i < k; i++)
{
if (n%10==0)
 n = n/10;
 else
 n -= 1;
}
printf("%ld",n);
return 0;
}