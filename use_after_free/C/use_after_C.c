#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *value = malloc(sizeof(int));

    *value = 42;

    printf("Before free: %d\n", *value);

    free(value);

    // Use-after-free:
    // The pointer still exists, but the memory is no longer valid.
    // This is undefined behavior.
    printf("After free: %d\n", *value);

    value = NULL;

    return 0;
}