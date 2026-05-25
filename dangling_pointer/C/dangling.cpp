#include <iostream>

int *createDanglingPointer()
{
    int localValue = 42;
    return &localValue; // returning address of local stack variable
}

int main()
{
    int *dangling = createDanglingPointer();

    std::cout << "Dangling pointer example:\n";
    std::cout << "Pointer address: " << dangling << "\n";
    std::cout << "Note: The pointer points to a local variable that has gone out of scope.\n";
    std::cout << "Dereferenced value (undefined behavior): " << *dangling << "\n";

    return 0;
}
