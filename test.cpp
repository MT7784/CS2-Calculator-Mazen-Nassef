#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
    cout << "Addition (3.5 + 2.2): " << add(3.5, 2.2) << endl;
    cout << "Subtraction (10.0 - 4.5): " << subtract(10.0, 4.5) << endl;
    cout << "Multiplication (3.0 * 4.0): " << multiply(3.0, 4.0) << endl;
    cout << "Division (10.0 / 2.0): " << divide(10.0, 2.0) << endl;
    cout << "Division by zero (10.0 / 0.0): " << divide(10.0, 0.0) << endl;

    cout << "Factorial of 5: " << factorial(5) << endl;
    cout << "Factorial of -3 (invalid): " << factorial(-3) << endl;

    cout << "GCD of 28 and 36: " << gcd(28, 36) << endl;
    cout << "LCM of 28 and 36: " << lcm(28, 36) << endl;

    cout << "Random number between 1 and 10: " << generateRandomNumber(1, 10) << endl;
    cout << "Random number between 10 and 1 (auto-swaps): " << generateRandomNumber(10, 1) << endl;

    return 0;
}
