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

