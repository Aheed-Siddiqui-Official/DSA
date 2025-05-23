#include <iostream>
#include <string>
using namespace std;

//Encapsulation
class Account {
private:
    double balance;
    string password;

public:
    string accId;
    string name;
};



int main() {
    //object
    Account a1;
    a1.name = "MAS";
    a1.accId = "123";

    cout << a1.name << endl;

    return 0;
}