#include "calculator.h"
#include <iostream> 
#include <cstdlib> 
#include <ctime>    

using namespace std;


static bool seedInitialized = false;
static void initializeSeed() {
    if (!seedInitialized) {
        srand(static_cast<unsigned int>(time(0)));
        seedInitialized = true;
    }
}

static int absInt(int x) {
    return (x < 0) ? -x : x;
}

static void swapInts(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}


double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0.0) {
        cout << "Error: Division by zero." << endl;
        return 0.0; 
    }
    return a / b;
}

int factorial(int n) {
    if (n < 0) {
        cout << "Error, Factorial is undefined for negative numbers." << endl;
        return 0;
    }

    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }

    return result;
}

int gcd(int a, int b) {
    a = absInt(a);
    b = absInt(b);

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}


