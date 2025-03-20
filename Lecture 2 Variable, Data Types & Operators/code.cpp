#include <iostream>
using namespace std;

int main() {
    // cout << "maheed"<<endl<<"siddiqui";

                    //Primative Data Types

    // int age = 25;
    // char grade = 'a';
    // float PI = 3.142f;
    // bool isSafe = false;

    // cout << sizeof(age) << endl << grade << endl << PI << endl << isSafe << endl;

                    //Type Casting

    //IMPLICIT
    // char grade = 'A';
    // int value = grade;
    // cout << value << endl;//65 ASCII VALUE
    
    //EXPLICIT
    // double price = 100.99;
    // int newPrice = (int)price;
    // cout << newPrice << endl;//100

    //INPUT
    // int age;//garbage value
    // cout << "Enter the age : ";
    // cin >> age;

    // cout << "Your age is : " << age << endl;

                    //OPERATORS

    //ARITHMETIC + - * / %
    // float a = 9, b = 2;

    // cout << "sum = " << (a + b) << endl;
    // cout << "sub = " << (a - b) << endl;
    // cout << "mul = " << (a * b) << endl;
    // cout << "div = " << (a / b) << endl;
    // cout << "modulo = " << (a % b) << endl; not works in float

    //RELATIONAL < <= > >= == !=
    //Returns TRUE or FALSE in answer

    // cout << (3 < 5) << endl; // true -> 1
    // cout << (3 > 5) << endl; //false -> 0
    // cout << (3 <= 3) << endl; // true -> 1
    // cout << (3 >= 3) << endl; // true -> 1
    // cout << (3 == 3) << endl; // true -> 1
    // cout << (3 != 3) << endl; // true -> 0

    //LOGICAL OPERATORS OR|| AND&& NOT!

    //NOT REVERT THE ANSWER
    // cout << !(3 > 1) << endl; //false

    // //OR TO COMBINE MULTIPLE STATEMENTS
    // cout << (!(3 > 1) || (3 < 1)) << endl; //false

    //AND ALL STATEMENTS SHOULD BE TRUE
    // cout << (!(3 > 1) && (3 < 1)) << endl; 

                    //SUM OF TWO NUMBERS
    

    // int a,b; 
    // //if i will declare sum over here so it will display garbage value because no value is stored in variables

    // cout << "Enter a : ";
    // cin >> a;

    // cout << "Enter b : ";
    // cin >> b;
    
    // int sum = a + b;
    // cout << "Sum = " << sum;

                    //UNARY OPERATORS
    
    //INCREMENT ++
    // a = a + 1 // a++
    // var = var + 1 // var++

    // a++ ---> kaam;update
    // ++a ---> update;kaam

    //POST-INCREMENT
    // int a = 10;
    // int b = a++;

    // cout << b << endl; // kaam 10
    // cout << a; // update 11

    //PRE INCREMENT
    // int c = 12;
    // int d = ++c;

    // cout << c << endl; // update 13
    // cout << d; // kaam 13


    //DECREMENT --
    // a = a - 1 // a--
    // var = var - 1 // var--

    // a-- ---> kaam;update
    // --a ---> update;kaam

    //POST-DECREMENT
    // int a = 10;
    // int b = a--;

    // cout << b << endl; // kaam 10
    // cout << a; // update 9

    //PRE DECREMENT
    // int c = 12;
    // int d = --c;

    // cout << c << endl; // update 11
    // cout << d; // kaam 11

                    //CALCULATOR

    int a,b;
    
    cout << "Enter a : ";
    cin >> a;

    cout << "Enter b : ";
    cin >> b;

    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int modulo = a % b;

    cout << "Sum is : " << sum << endl;
    cout << "Sub is : " << sub << endl;
    cout << "Mul is : " << mul << endl;
    cout << "Div is : " << div << endl;
    cout << "Modulo is : " << modulo;

    

















    return 0;
}