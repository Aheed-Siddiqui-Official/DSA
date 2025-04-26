#include <iostream>
#include <vector>
using namespace std;









int main() {
    vector<int> vec = {2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 7, 9, 9};
    cout << vec.size();
    singleElemSortedArray(vec);
    return 0;
}