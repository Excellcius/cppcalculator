#include <iostream>
#include <cmath>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

void printMenu() {
    std::cout << "\nMenu:\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cout << "5. Square Root\n";
    std::cout << "6. Exponentiation\n";
    std::cout << "7. Factorial\n";
    std::cout << "8. Exit\n";
}

int main() {
    char operation;
    double num1, num2;

    do {
        printMenu();
        std::cout << "Choose an operation (1-8): ";
        std::cin >> operation;

        switch (operation) {
            case '1':
                std::cout << "Enter first number: ";
                std::cin >> num1;
                std::cout << "Enter second number: ";
                std::cin >> num2;
                std::cout << "Result: " << num1 + num2 << std::endl;
                break;
            case '2':
                std::cout << "Enter first number: ";
                std::cin >> num1;
                std::cout << "Enter second number: ";
                std::cin >> num2;
                std::cout << "Result: " << num1 - num2 << std::endl;
                break;
            case '3':
                std::cout << "Enter first number: ";
                std::cin >> num1;
                std::cout << "Enter second number: ";
                std::cin >> num2;
                std::cout << "Result: " << num1 * num2 << std::endl;
                break;
            case '4':
                std::cout << "Enter numerator: ";
                std::cin >> num1;
                std::cout << "Enter denominator: ";
                std::cin >> num2;
                if (num2 != 0) {
                    std::cout << "Result: " << num1 / num2 << std::endl;
                } else {
                    std::cout << "Error: Division by zero" << std::endl;
                }
                break;
            case '5':
                std::cout << "Enter a number: ";
                std::cin >> num1;
                if (num1 >= 0) {
                    std::cout << "Result: " << sqrt(num1) << std::endl;
                } else {
                    std::cout << "Error: Cannot calculate square root of a negative number" << std::endl;
                }
                break;
            case '6':
                std::cout << "Enter base: ";
                std::cin >> num1;
                std::cout << "Enter exponent: ";
                std::cin >> num2;
                std::cout << "Result: " << pow(num1, num2) << std::endl;
                break;
            case '7':
                std::cout << "Enter a non-negative integer: ";
                std::cin >> num1;
                if (num1 >= 0 && std::floor(num1) == num1) {
                    std::cout << "Result: " << factorial(static_cast<int>(num1)) << std::endl;
                } else {
                    std::cout << "Error: Please enter a non-negative integer for factorial" << std::endl;
                }
                break;
            case '8':
                std::cout << "Exiting the calculator. Goodbye!\n";
                break;
            default:
                std::cout << "Error: Invalid selection. Please choose a number between 1 and 8.\n";
        }
    } while (operation != '8');

    return 0;
}
