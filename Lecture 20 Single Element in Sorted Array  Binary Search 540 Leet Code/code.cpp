#include <iostream>
#include <vector>
using namespace std;

int singleElemSortedArray(vector<int> &vec) {
    int st = 0;
    int end = vec.size() - 1;

    if (end == 0) return vec[0];

    
}







int main() {
    vector<int> vec = {2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 7, 9, 9};
    cout << vec.size();
    singleElemSortedArray(vec);
    return 0;
}