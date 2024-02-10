#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    double number, sum = 0;
    int n_number = 0;
    while (cin >> number and number >= 0) {
        sum += number;
        ++ n_number;
    }
    double result = sum/n_number;
    cout << result << endl;
}