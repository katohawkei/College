#include <stdio.h>
#include <stdlib.h>

int main()
{

    char ac = 'f', bc = '2';
    char *pac = &ac, *pbc = &bc;
    long int al = 3, bl = 4;
    long int *pal = &al, *pbl = &bl;

    printf("\nValue of pointers: ");
    printf("\npac = %p\tpbc = %p", pac, pbc);
    printf("\t(pac - pbc) = %p", (void *)(pac - pbc));
    printf("\npal = %p\tpbl = %p\t(pbl - pal) = %p", (void *)pal, (void *)pbl,
           (void *)(pbl - pal));
    printf("\nValue of variables: ");
    printf("\npac - pbc = %d\n", (int)(pac - pbc));
    printf("\npbl - pal = %ld\n", (long int)pbl - (long int)pal);

    return 0;
}
