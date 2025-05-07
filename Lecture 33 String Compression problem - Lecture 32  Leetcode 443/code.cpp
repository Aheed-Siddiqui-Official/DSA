#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size();
    int idx = 0;

    for(int i=0 ; i<n ; i++) {
        char ch = chars[i];
        int count = 0;

        while(i<n && chars[i] == ch) {
            count++;
            i++;
        }

        
}

int main() {
    vector <char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    cout << compress(chars);
    return 0;
}