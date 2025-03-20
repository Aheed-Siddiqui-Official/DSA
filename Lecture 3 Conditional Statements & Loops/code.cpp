#include <iostream>
using namespace std;

int main(){
                    //CONDITIONAL STATEMENTS

    // int n;
    // cout << "Enter n :";
    // cin >> n;

    // if(n>=0){
    //     cout << "Positive"<< endl;
    // } 
    // else{
    //     cout << "Negative";
    // }


    // int age;
    // cout << "Enter age :";
    // cin >> age;

    // if(age>=18){
    //     cout << "You can vote"<< endl;
    // } 
    // else{
    //     cout << "You can't vote";
    // }

    // int n;
    // cout << "Enter n : ";
    // cin >> n;

    // if(n % 2 ==0){
    //     cout << "Even"<< endl;
    // } 
    // else{
    //     cout << "Odd";
    // }

    // int marks;
    // cout << "Enter marks : ";
    // cin >> marks;

    // if(marks >= 90){
    //     cout << "A+"<< endl;
    // } 
    // else if(marks >= 80 && marks < 90){
    //     cout << "B+";
    // }
    // else if(marks >= 70 && marks < 80){
    //     cout << "B";
    // }
    // else{
    //     cout << "Fail";
    // }

    // char ch;
    // cout << "Enter Char = ";
    // cin >> ch;

    // if(ch >= 'a' && ch <= 'z'){
    //     cout << "Lowercase";
    // }
    // else{
    //     cout << "Uppercase";
    // }

    // if(ch >= 65 && ch <= 90){
    //     cout << "Uppercase";
    // }
    // else{
    //     cout << "Lowercase";
    // }

                    //TERNARY STATEMENT

    // int n;
    // cout << "Enter n : ";
    // cin >> n;

    // cout << (n >= 0 ? "positive" : "negative") <<  endl;
    
                    //LOOPS

            //WHILE LOOP

    // int count;
    // cout << "Enter count : " << endl;
    // cin >> count;

    // int range;
    // cout << "Enter range : " << endl;
    // cin >> range;

    // while (count <= range)
    // {
    //     cout << count++ << endl;
    // }

    //SUM OF NUMBERS 1 TO n
    
    // int i;
    // cout << "Enter i = ";
    // cin >> i;

    // int n;
    // cout << "Enter n = ";
    // cin >> n;

    // int sum = 0;

    // while (i <= n){
    //     sum += i;
    //     i++;
    // }

    // cout << sum;

    //SUM OF ODD NUMBERS FORM i TO n
    // int i;
    // cout << "Enter i = ";
    // cin >> i;

    // int n;
    // cout << "Enter n = ";
    // cin >> n;

    // int sum = 0;

    // while(i <= n){
    //     if(i % 2 != 0){
    //         sum += i;
    //     }
    //     i++;
    // }

    // cout << "Sum = " << sum;
    


            //FOR LOOP
    
    //SUM OF NUMBERS 1 TO n
    
    // int i;
    // cout << "Enter i = ";
    // cin >> i;

    // int n;
    // cout << "Enter n = ";
    // cin >> n;

    // int sum = 0;

    // for(i ; i <= n ; i++){
    //     sum += i;
    // }

    // cout << sum;

    //SUM OF NUMBERS 1 TO n USING BREAK STATEMENT
    
    // int i;
    // cout << "Enter i = ";
    // cin >> i;

    // int n;
    // cout << "Enter n = ";
    // cin >> n;

    // int sum = 0;

    // for(i ; i <= n ; i++){
    //     sum += i;

    //     if(i == 5){
    //         break;  //keyword
    //     }
    // }

    // cout << sum;

    // //SUM OF ODD NUMBERS FORM i TO n
    // int i;
    // cout << "Enter i = ";
    // cin >> i;

    // int n;
    // cout << "Enter n = ";
    // cin >> n;

    // int sum = 0;

    // for(i ; i <= n ; i++){
    //     if(i % 2 != 0){
    //         sum += i;
    //     }
    // }

    // cout << "Sum = " << sum;

    //SUM OF EVEN NUMBERS FORM i TO n
    // int i;
    // cout << "Enter i = ";
    // cin >> i;

    // int n;
    // cout << "Enter n = ";
    // cin >> n;

    // int sum = 0;

    // for(i ; i <= n ; i++){
    //     if(i % 2 == 0){
    //         sum += i;
    //     }
    // }

    // cout << "Sum = " << sum;

            //DO WHILE LOOP

    // int n = 10;
    // int i = 1;

    // do{
    //     cout << i << " ";    
    //     i++;
    // } while (i <= n);
    

    // Q)IF A NUMBER IS PRIME OR NOT

    // int n;                
    // cout << "Enter n = "; // 7
    // cin >> n;

    // bool isPrime = true;

    // for(int i = 2 ; i <= (n - 1) ; i++){ // 2 2<6  2+1=3
    //     if(n % i == 0){ // 2 % 7 != 0 true
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if(isPrime == true) {
    //     cout << "Prime\n";
    // } 
    // else {
    //     cout << "Non Prime";
    // }

    // Q)IF A NUMBER IS PRIME OR NOT OPTIMIZED

    // int n;                
    // cout << "Enter n = "; 
    // cin >> n;

    // bool isPrime = true;

    // for(int i = 2 ; (i * i <= n) ; i++){ 
    //     if(n % i == 0){ 
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if(isPrime == true) {
    //     cout << "Prime\n";
    // } 
    // else {
    //     cout << "Non Prime";
    // }

            //NESTED LOOPS

    // int n;                
    // cout << "Enter n = "; 
    // cin >> n;

    // for(int i = 1 ; i <= n ; i++){ // LINE
    //     cout << "*";

    //     for(int j = 1 ; j <= n ; j++){ // STARS IN A LINE
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

                    //HOMEWORK QUESTIONS

            //Q) SUM OF ALL NUMBERS FROM 1 TO N WHICH ARE DIVISIBLE BY 3

    // int n;                
    // cout << "Enter n = "; 
    // cin >> n;

    // int sum = 0;

    // for(int i = 1 ; i <= n ; i++) {
    //     if(i % 3 == 0) {
    //         sum += i;
    //     }
    // }

    // cout << "Sum = " << sum;

            //Q) FACTORIAL OF A NUMBER

    // int n;                
    // cout << "Enter n = "; 
    // cin >> n;

    // int factorial = 1;

    // for(int i = n ; i > 0 ; i--){
    //     factorial *= i;
    // }

    // cout << "Factorial = " << factorial; 


    return 0;
}
