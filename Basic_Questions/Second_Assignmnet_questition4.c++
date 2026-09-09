#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14
int main(){
    int radius_of_circle;
    cout << "Enter the radius of the circle: ";
    cin >> radius_of_circle;
    cout << "The Radius of the Circle is: "<< PI * pow(radius_of_circle,2);
    return 0;
}