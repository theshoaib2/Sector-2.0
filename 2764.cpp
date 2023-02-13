#include <stdio.h>
#include <string.h>
int main()
{
char date[10];
scanf("%s", date);
int dd, mm, yy;
scanf(date, "%d/%d/%d", &dd, &mm, &yy);
printf("%02d/%02d/%02d\n", mm, dd, yy);
printf("%02d/%02d/%02d\n", yy, mm, dd);
printf("%02d-%02d-%02d\n", dd, mm, yy);
return 0;
}