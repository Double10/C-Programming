#include <stdio.h>

void main(void)
{
    int nInput = 0;
    char chCredit = 'X';
    scanf("%d", &nInput);
    
    if (nInput >= 90)
    {
        chCredit = 'A';
    }
    else if (nInput >= 80)
    {
        chCredit = 'B';
    }
    else if (nInput >= 70)
    {
        chCredit = 'C';
    }
    else if (nInput >= 60)
    {
        chCredit = 'D';
    }
    else
    {
        chCredit = 'F';
    }
    
    printf("Credit : %c\n", chCredit);
}
