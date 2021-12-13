#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int znach, znach2;
    scanf("%o", &znach);
    printf("Number %d\n", znach);
    printf("Number %o\n", znach >> 3);
    printf("Number %o\n", ~znach);

    scanf("%o", &znach2);
    printf("Number %o", znach | znach2);
    return 0;
}
