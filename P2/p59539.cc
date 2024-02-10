#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    double number;
    double result = 0;
    double i = 1;
    cin >> number;
    while (i <= number){
        result = result + 1/i;
        ++i;
    }
    cout << result << endl;
}