#include <stdio.h>
int main(void)
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d, %d, %d, %d\n",
            a + b,
            a - b,
            a * b,
            a / b);
    
    return 0;
}
