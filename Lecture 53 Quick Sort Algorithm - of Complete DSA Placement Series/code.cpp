
#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Function to find the next prime number greater than a given number
int nextPrime(int n) {
    while (!isPrime(n)) {
        n++;
    }
    return n;
}

