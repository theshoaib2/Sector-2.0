// the.shoaib2
#include <stdio.h>

int main()
{
    int vetor[5];
    int i;
    int A = 0, B = 0, C = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (i = 1; i < 4; i++)
    {
        if (vetor[i] < vetor[i + 1] && vetor[i - 1] < vetor[i])
            A++;

        else if (vetor[i] > vetor[i + 1] && vetor[i - 1] > vetor[i])
            B++;

        else
        {
            C = 3;
            break;
        }
    }

    if (A == 3)
        printf("C\n");

    else if (B == 3)
        printf("D\n");

    else if (C == 3)
        printf("N\n");

    return 0;
}