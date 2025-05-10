#include <iostream>
#include <vector>
using namespace std;



int main() {
    vector <int>arr = {1, 2, 3};
    vector <int>ans;
    
    printSubsets(arr, ans, 0);
    return 0;
}