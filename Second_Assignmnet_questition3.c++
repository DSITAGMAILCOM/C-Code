#include <iostream>
using namespace std;
int main(){
    int principal_amount;
    int rate_of_interest;
    int time;
    cout << "Enter the pricipal amount: ";
    cin >> principal_amount;
    cout << "Enter the rate of the interest: ";
    cin >> rate_of_interest;
    cout << "Enter the time: ";
    cin >> time;
    double simple_interest=(principal_amount * rate_of_interest * time)/100;
    cout << "The simple interest is: " << simple_interest;
    return 0;
}