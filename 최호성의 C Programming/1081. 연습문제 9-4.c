#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int nStrlength = 0, nMaxlength = 0;
    char *pszData = NULL;
    
    scanf("%d", &nMaxlength);
    
    pszData = (char *)malloc(nMaxlength);
    fflush(stdin);
    fgets(pszData, 100, stdin);
    
    while (*(pszData + nStrlength) != 0)
    {
        nStrlength++;
    }
    
    printf("Length: %d\n", nStrlength);
    free(pszData);
}
