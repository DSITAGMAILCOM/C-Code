#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int number){
    for(int i=2;i<sqrt(number);i++){
        if(number%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int number;
    cout << "Enter the Number: ";
    cin >> number;
    string check_prime= isPrime(number) ? "It is Prime" : "Not Prime";
    cout << check_prime;
    return 0;
}