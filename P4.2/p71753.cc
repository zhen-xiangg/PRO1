#include <iostream>
using namespace std;

int main () {
    int n, number, max;
    while (cin >> n) {
        cin >> max;
        for (int i = 1; i < n; ++i) {
            cin >> number;
            if (number > max) max = number;
        }
        cout << max << endl;
    }
}