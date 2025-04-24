#include <iostream>
#include <vector>
using namespace std;



int main() {

    int target;
    cout << "Enter Targeted Value = ";
    cin >> target;

    vector<int> vec = {10, 9, 8, 7, 1, 2, 3, 4, 5, 6};

    cout << "Value At = " << rotatedSortedArray(vec, target);

    return 0;
}