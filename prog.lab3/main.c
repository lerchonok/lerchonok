#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int znach, znach2;
    scanf("%o", &znach);
    printf("%d\n", znach);
    printf("%o\n", znach >> 3);
    printf("%o\n", ~znach);

    scanf("%o", &znach2);
    printf("%o", znach | znach2);
    return 0;
}
