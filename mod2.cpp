#include <iostream>
#include <string>

int main() {
    for (int i = 0; i < 3; ++i) {
        // Get user input for the first string
        std::cout << "Enter the first string: ";
        std::string firstString;
        std::getline(std::cin, firstString);

        // Get user input for the second string
        std::cout << "Enter the second string: ";
        std::string secondString;
        std::getline(std::cin, secondString);

        // Concatenate the two strings
        std::string concatenatedString = firstString + secondString;

        // Print the resulting output
        std::cout << "Concatenated String: " << concatenatedString << std::endl;

        // Add a newline for better readability
        std::cout << std::endl;
    }

    return 0;
}
