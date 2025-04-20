#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 8 , 6, 2, 5, 4, 8, 3, 7};

    // int maxWater = 0;

    // for (int i = 0 ; i < vec.size() ; i++) {
    //     for (int j = i + 1 ; j < vec.size() ; j++) {
    //         int w = j - i;
    //         int h = min(vec[i], vec[j]);
    //         int area = w * h;
    //         maxWater = max(maxWater, area);
    //     }
    // }

    int lp = 0;
    int rp = vec.size() - 1;
    int maxWater = 0;

    while (lp < rp) {
        int w = rp - lp;
        int h = min(vec[rp], vec[lp]);
        int currWater = w * h;
        maxWater = max(maxWater, currWater);

        vec[lp] < vec[rp] ? lp++ : rp--;
    }

    cout << "Max Water = " << maxWater;
    


    return 0;
}