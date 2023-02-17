//the.shoaib2
#include<stdio.h>
int main()
{
    long int A,B,C;
    char D;
    scanf("%d",&A);
    scanf("%d %c %d", &B,&D,&C);
 if (D == '+')
 {
    if (B + C <= A)
    {
        printf("OK\n");
    }else{
    printf("OVERFLOW\n");
    }
 }
 else 
 {
    if (B * C <= A)
    {
     printf("OK\n");
    }else
    {
     printf("OVERFLOW\n");
    }
     
 }

}