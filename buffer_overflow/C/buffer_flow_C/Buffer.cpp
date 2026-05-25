#include <iostream>
#include <cstring>

int main()
{
    char buffer[10];
    const char *overflow = "This string is too long";

    std::cout << "Before overflow:\n";
    std::cout << "  buffer size = " << sizeof(buffer) << "\n";
    std::cout << "  source string = '" << overflow << "'\n";

    // Unsafe copy demonstrates a classic buffer overflow vulnerability.
    std::strcpy(buffer, overflow);

    std::cout << "After overflow:\n";
    std::cout << "  buffer contains: '" << buffer << "'\n";
    std::cout << "  note: this may overwrite adjacent memory and cause undefined behavior." << std::endl;

    return 0;
}
