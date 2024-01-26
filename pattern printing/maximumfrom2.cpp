#include <iostream>

int main() {
    int num1, num2, num3;
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    int maxNumber = num1;

    if (num2 > maxNumber) {
        maxNumber = num2;
    }
    if (num3 > maxNumber) {
        maxNumber = num3;
    }

    std::cout << "The maximum number is: " << maxNumber << std::endl;

    return 0;
}
