
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

// Hash table class
class HashTable {
private:
    vector<string> table;
    int size;
    int hash1(const string &key) {
        int hash = 0;
        for (char ch : key) {
            hash = (hash * 31 + ch) % size;
        }
        return hash;
    }
    int hash2(const string &key) {
        int hash = 0;
        for (char ch : key) {
            hash = (hash * 17 + ch) % size;
        }
        return (hash % size) + 1; // Ensure non-zero step size
    }

public:
    HashTable(int n) : size(nextPrime(n)), table(size, "") {}

    void insert(const string &key) {
        int index = hash1(key);
        int step = hash2(key);
        int originalIndex = index;

        while (!table[index].empty()) {
            index = (index + step) % size;
            if (index == originalIndex) {
                cout << "Hash table is full, cannot insert: " << key << endl;
                return;
            }
        }
        table[index] = key;
    }

    