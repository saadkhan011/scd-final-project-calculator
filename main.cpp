#include <iostream>

class Calculator {
public:
    // Function prototypes
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);

};



int main() {
    Calculator calculator;

    // Taking user input
    double num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Perform operations
    std::cout << "Addition: " << calculator.add(num1, num2) << std::endl;
    std::cout << "Subtraction: " << calculator.subtract(num1, num2) << std::endl;

    return 0;
}