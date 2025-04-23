#include <iostream>
#include <vector>
using namespace std;




int main() {

                                        // BINARY SEARCH

    vector<int> oddArr = {-1, 0, 3, 4, 5, 9, 12};
    int oddTar = 12;

    cout << binarySearch(oddArr, oddTar) << endl;

    vector<int> evenArr = {-1, 0, 3, 5, 9, 12};
    int evenTar = 0;

    cout << binarySearch(evenArr, evenTar) << endl;

    return 0;
}