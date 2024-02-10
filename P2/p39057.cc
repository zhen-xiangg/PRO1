#include <iostream>
using namespace std;
#include <cmath>

int main() {
    cout.setf(ios::fixed);
    cout.precision(6);
    int number;
    cin >> number;
    for (int i = 0; i < number; i++) {
    string shape;
    double area;
        cin >> shape;
        if (shape == "rectangle") {
            double length, width;
            cin >> length >> width;
            area = length * width;
        } else if (shape == "circle") {
            double radius;
            cin >> radius;
            area = M_PI * radius * radius;
        }
    cout << area << endl;
    }
}