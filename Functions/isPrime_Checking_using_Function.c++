#include <iostream>
using namespace std;
bool isPrime(int number){
    for(int i=2;i<number;i++){
        if(number%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int number;
    cout << "Enter the Number you want to check: ";
    cin >> number;
    string data=isPrime(number) ? "It is a Prime Number" : "Not a Prime Number";
    cout << data;
    return 0;
}

