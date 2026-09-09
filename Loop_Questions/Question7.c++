#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter the Number: ";
    cin >> number;
    int sum=0;
    int temp=number;
    while(temp>0){
        int remainder= temp%10;
        if(remainder%2!=0){
            sum = sum + remainder;
        }
        temp = temp/10;
    }
    cout << "The Sum of the odd Digits of the number " << number << " is: " << sum; 
    cout << "\n";
    return 0;
}