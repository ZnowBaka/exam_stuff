#include <stdio.h>
#include <string.h>

void app_main(void)
{
    char buffer[10];
    char overflow[] = "This string is too long for the buffer";
    printf("Before overflow:\n");
    printf("buffer size = %d\n", sizeof(buffer));
    printf("source string = %s\n", overflow);

    for (int i = 0; overflow[i] != '\0'; i++)
    {
        buffer[i] = overflow[i]; // This will write beyond the bounds of 'buffer'
        printf("Writing '%c' to buffer[%d]\n", overflow[i], i);
    }
 
    printf("After overflow:\n");
    printf("buffer contains: %s\n", buffer);

}