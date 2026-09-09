#include <iostream>
using namespace std;
int main(){
    int number,number1;
    cout << "Enter First Number: ";
    cin >> number;
    cout << "Enter the Second Number: ";
    cin >> number1;
    if(number>number1){
        cout << number << " is greater then " << number1;
    }
    else{
        cout << number1 << " is greater then " << number;
    }
    return 0;

}
