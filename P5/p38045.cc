#include <iostream>
using namespace std;
#include <cmath>

int square(int n) {
    int square_n = n*n;
    return square_n;
}

double square_root(int n) {
    cout.setf(ios::fixed);
    cout.precision(6);
    double square_root_n = sqrt(n);
    return square_root_n;
}

int main() {
    int n;    
    while (cin >> n) {
        cout << square(n) << " " << square_root(n) << endl;
    }
}