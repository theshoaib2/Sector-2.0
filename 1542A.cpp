//the.shoaib2
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t --)
    {    
int odd = 0 ,even = 0;
   int n;
   n *= 2;
for (int i = 0; i < n; i++)
{
    int x;
    scanf("%d",&x);
    if (x % 2 == 0) 
     even++;
    else
     odd++;
    if (even == odd)
     printf("Yes\n");
    else
    printf("No\n");
    
}
    }
    return 0;
}