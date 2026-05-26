#include <stdio.h>

int *createDanglingPointer()
{
    int localValue = 42;
    return &localValue; // returning address of local stack variable
}

int main()
{
    int *dangling = createDanglingPointer();

    printf("Dangling pointer example:\n");
    printf("Pointer address: %p\n", (void*)dangling);
    printf("Note: The pointer points to a local variable that has gone out of scope.\n");
    printf("Dereferenced value (undefined behavior): %d\n", *dangling);

    return 0;
}
