#include<iostream>
using namespace std;

                    // FUNCTION DEFINITION

    // void printHello() {
    //     cout << "Hello\n";
    // }

    // int printHello() {
    //     cout << "MAS\n";
    //     return 3;
    // }

            // sum of 2 number

    // int sum(int a, int b) {
    //     int s = a + b;
    //     return s;
    // }

            // min of 2 number

    // int minimum(int a, int b) { // parameters : copy of the arguments
    //     if(a < b) {
    //         return a;
    //     } else {
    //         return b;
    //     }
    // }

            // sum of numbers from 1 to n

    // int sumN(int n) {
    //     int sum = 0;

    //     for(int i = 1 ; i <= n ; i++) {
    //         sum += i;
    //     }
    //     return sum;
    // }

            // n factorial

    // int nFact(int n) {
    //     int fact = 1;

    //     for(int i = n ; i > 0 ; i--) {
    //         fact *= i;
    //     }
    //     return fact;
    // }

            // pass by value examples

    // void changeX(int x) {
    //     x = 2 * x;
    //     cout << "x = " << x << endl;
    // }

            // sum of digits of number

    // int sumOfDig(int n) { // 145
    //     int q1 = n / 100; // 1
    //     int r1 = n % 100; // 45

    //     int q2 = r1 / 10; // 4 
    //     int r2 = r1 % 10; // 5

    //     int sum = q1 + q2 + r2;
    //     return sum;
    // }

    // int sumOfDig(int n) {
    //     int sum = 0;

    //     for( ; n > 0 ; n /= 10) { // 145 => 14 => 1
    //         sum += n % 10; // 5 4 1
    //     }
    //     return sum;
    // }

            // nCr formula function

    // float factorial(int n) {
    //     int fact = 1;
    //     for(int i = n ; i > 0 ; i--) {
    //         fact *= i;
    //     }
    //     return fact;
    // }

    // int nCr(int n, int r) {
    //     int fact_n = factorial(n);
    //     int fact_r = factorial(r);
    //     int fact_nmr = factorial(n-r);

    //     return fact_n / (fact_r * fact_nmr);
    // }

                //  No is Prime function

        //     int isPrime(int n) {
        //         bool Prime = true;

        //         for(int i = 2 ; i <= (n-1) ; i++) {
        //                 if(n % i == 0) {
        //                         Prime = false;
        //                         break;
        //                 }
        //         }

        //         if(Prime == true) {
        //                 cout << "No is Prime\n";
        //         } else {
        //                 cout << "No is not Prime";
        //         }

        //         return Prime;
        //     }


int main() {

                    // FUNCTION CALL / INVOKE

    // int val = printHello();
    // cout << "val = " << val << endl;

    // cout << printHello() << endl;

    // cout << sum(10, 5) << endl;;

    // cout << minimum(5, 3); // arguments : actual values passed to functions // arguments also called literals

    // cout << sumN(10) << endl;
    // cout << sumN(11);

    // cout << nFact(5);

    // int x = 5;
    // changeX(x);
    // cout << "x = " << x << endl;

    // cout << sumOfDig(145);

    // cout << sumOfDig(155);

    // int n = 8, r = 2;
    // cout << nCr(n, r);
    
    // isPrime(4);

    return 0;
}