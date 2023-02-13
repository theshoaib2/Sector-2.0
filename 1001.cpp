#include<stdio.h>
int main()
{
    int note;
    scanf("%d", &note);
    int alpha = note / 100;
    printf("%d nota(s) de R$ 100.00\n",alpha );
    alpha =  (note%100)/50;
    return 0;
}