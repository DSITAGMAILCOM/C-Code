#include <iostream>
using namespace std;
int main(){
    int numberToCheckEvenOrOdd;
    cout << "Enter the Number: ";
    cin >> numberToCheckEvenOrOdd;
    if(numberToCheckEvenOrOdd%2==0){
        cout << numberToCheckEvenOrOdd << " is Even Number";
    }
    else{
        cout << numberToCheckEvenOrOdd << " is Odd Number";
    }
    return 0;
}                   