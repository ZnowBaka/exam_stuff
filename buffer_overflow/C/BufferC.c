#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[10];
    const char *overflow = "This string is too long";

    printf("Before overflow:\n");
    printf("buffer size = %d\n", sizeof(buffer));
    printf("source string = %s\n", overflow);

    strcpy(buffer, overflow);

    printf("After overflow:\n");
    printf("buffer contains: %s\n", buffer);
    return 0;
}