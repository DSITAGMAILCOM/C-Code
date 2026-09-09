#include <iostream>
using namespace std;
int main(){
    float cost_of_item_pencil;
    float cost_of_item_pen;
    float cost_of_item_eraser;
    cout << "Enter the cost of the pencil; ";
    cin >> cost_of_item_pencil;
    cout << "Enter the cost of the pen; ";
    cin >> cost_of_item_pen;
    cout << "Enter the cost od the Eraser; ";
    cin >> cost_of_item_eraser;
    float add_the_gst = (cost_of_item_pencil + cost_of_item_pen + cost_of_item_eraser)*0.18;
    cout << "The Toatl amount of the items is: " << cost_of_item_pencil + cost_of_item_pen + cost_of_item_eraser + add_the_gst << "\n";
    return 0;
}