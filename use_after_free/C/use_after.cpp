#include <iostream>

int main() {
    int *value = new int(42);
    std::cout << "Before delete: " << *value << "\n";

    delete value;

    // Use after free: the pointer still points to memory that has been freed.
    // Behavior is undefined and may crash, print garbage, or appear to work.
    std::cout << "After delete: " << *value << "\n";

    value = nullptr;
    return 0;
}
