#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter the Number: ";
    cin >> number;
    int temp=number;
    int sum=0;
    while(temp > 0){
        int remainder= temp%10;
        sum = sum + remainder;
        temp = temp/10;
    }
    cout << "The Sum of the Digits of the " << number << " is: " << sum;
    cout << "\n";
    return 0;
}