#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter the Number: ";
    cin >> number;
    int remain=0;
    while(number>0){
        int remainder= number%10;
        remain = remain*10 + remainder;
        number=number/10;
    }
    cout << remain << "\n";
    return 0;
}