#include <iostream>
using namespace std;

int main() {

                                        // BINARY EXPONENTIATION => LEET CODE 50
                                        
    // int n;
    // int x;
    // long binForm = n;
    // double ans = 1;

    // if(n == 0) return 1.0;
    // if(x == 0) return 0.0;
    // if(x == 1) return 1.0;
    // if(x = -1 && n%2 == 0) return 1.0;
    // if(x = -1 && n%2 != 0) return 1.0;

    // if(n < 0) {
    //     x = 1/x;
    //     binForm = -binForm;
    // }

    // while(binForm > 0) {
    //     if(binForm % 2 == 1) {
    //         ans *= x;
    //     }
    //     x *= x;
    //     binForm /= 2;
    // }

                                        // BUY AND SELL PROBLEM => LEET CODE 121

    int price[] = {7, 1, 5, 3, 6, 4};

    int maxProfit = 0;
    int bestBuy = price[0];
    
    for(int i = 1 ; i < price.size() ; i++) {
        if (price[i] > bestBuy) {
            maxProfit = max(maxProfit, price[i] - bestBuy);
        }
        bestBuy = min(bestBuy, price[i]);
    }






    return 0;
}