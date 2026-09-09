#include <iostream>
using namespace std;
int main(){
    int sumNaturalNumber=0;
    int number;
    cout << "Enter then Number: ";
    cin >> number;
    for(int i=1;i<=number;i++){
        sumNaturalNumber = sumNaturalNumber + i;
    }
    cout << "The Sum of " << number << " Natural Number is: " << sumNaturalNumber;
    return 0;
}