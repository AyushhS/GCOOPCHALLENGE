#include <iostream>
#include <string>
#include "Gymkhana.cpp"

int main() {
    // Test
    President president("Dr. Shrinivas Karanki");
    Vice_president vice_president("Swapnil More");
    General_secretary general_secretary("Arkadipta Chatterjee", "Tech");
    std::cout << general_secretary.name;
}