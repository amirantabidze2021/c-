#include <iostream>

int main() {
    // Input
    int n;
    std::cin >> n;

    // Extract digits
    int digit1 = n % 10;          // Units place
    int digit2 = (n / 10) % 10;   // Tens place
    int digit3 = n / 100;         // Hundreds place

    // Find the maximum and minimum of the digits
    int maxDigit = std::max(digit1, digit2, digit3);
    int minDigit = std::min(digit1, digit2, digit3);

    // Calculate the difference between the largest and smallest numbers
    int largest = digit1 + digit2 + digit3 - minDigit;
    int smallest = digit1 + digit2 + digit3 - maxDigit;

    // Output: Display the difference
    std::cout << largest - smallest << std::endl;

    return 0;
}

