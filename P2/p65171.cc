#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    int number;
    cin >> number;
    double a = 0, b = 0;
    for (int i = 0; i < number; i++) {
        double n_number;
        cin >> n_number;
        a += n_number * n_number;
        b += n_number;
    }
    double result = ((a/(number-1))) - (b*b/(number*(number-1)));
    cout << result << endl;
}
