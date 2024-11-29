#include <iostream>
using namespace std;

// Task 1
int factorial(int number) {
    int result = 1;
    for (int i = 1; i <= number; i++) {
        result = result * i;
    }
    return result;
}

// Task 2
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

// Task 3
int maxOfThree(int firstNumber, int secondNumber, int thirdNumber) {
    int maxNumber = firstNumber;
    if (secondNumber > maxNumber) {
        maxNumber = secondNumber;
    }
    if (thirdNumber > maxNumber) {
        maxNumber = thirdNumber;
    }
    return maxNumber;
}

int main() {
    int number;

    // Task 1
    cout << "Enter a number to calculate factorial: ";
    cin >> number;
    cout << "Factorial of " << number << " is " << factorial(number) << '\n';

    // Task 2
    cout << "Enter a number to check if it is prime: ";
    cin >> number;
    if (isPrime(number)) {
        cout << number << " is a prime number.\n";
    }
    else {
        cout << number << " is not a prime number.\n";
    }

    // Task 3
    int first, second, third;
    cout << "Enter three numbers to find the maximum: ";
    cin >> first >> second >> third;
    cout << "The largest number is " << maxOfThree(first, second, third) << '\n';
}
