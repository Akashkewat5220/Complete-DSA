#include <iostream>
#include <cmath>

bool isArmstrong(int num) {
    int originalNum = num;
    int numDigits = 0;
    int sum = 0;

    // Count the number of digits in the number
    while (num != 0) {
        num /= 10;
        numDigits++;
    }

    // Reset num to the original number
    num = originalNum;

    // Calculate the sum of digits raised to the power of numDigits
    while (num != 0) {
        int digit = num % 10;
        sum += std::pow(digit, numDigits);
        num /= 10;
    }

    // Check if the sum is equal to the original number
    return sum == originalNum;
}

int main() {
    int startRange, endRange;

    std::cout << "Enter the start of the range: ";
    std::cin >> startRange;

    std::cout << "Enter the end of the range: ";
    std::cin >> endRange;

    std::cout << "Armstrong numbers in the range " << startRange << " to " << endRange << " are:" << std::endl;

    for (int num = startRange; num <= endRange; num++) {
        if (isArmstrong(num)) {
            std::cout << num << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
