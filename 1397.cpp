// the.shoaib2
#include <stdio.h>
// You will be given a decimal number. You will have to convert it to its ternary (Base 3) equivalent.
// Input
// The input file contains at most 100 lines of inputs. Each line contains a non-negative decimal integer
// N (N < 1000000001). Input is terminated by a line containing a negative value. This line should not
// be processed.
// Output
// For each line of input produce one line of output. This line contains the ternary equivalent of decimal
// value N.
// Sample Input
// 10
// 100
// 1000
// -1
// Sample Output
// 101
// 10201
// 1101001
int main()
{
    int n;
    while (1)
    {
        scanf("%d", &n);
        if (n < 0)
        {
            break;
        }
        int ternary[32];
        int i = 0;
        while (n > 0)
        {
            ternary[i] = n % 3;
            n /= 3;
            i++;
        }
        if (i == 0)
        {
            printf("0");
        }
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%d", ternary[j]);
        }
        printf("\n");
    }
    return 0;
}
