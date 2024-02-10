#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    if (n > 2) {
        for (int i = n; i > 0; --i) {
            cout << '*';
        }
        cout << endl;
        for (int j = 1; j < n -2; ++j) {
            for (int z = 1; z <= j; ++z) {
                cout << " ";
            }
            cout << '*';
            for (int y = n-2-j; y > 0; --y) {
                cout << " ";
            }
            cout << '*' << endl;
        }
        for (int k = 1; k <= n-2; k++) {
            cout << " ";
        }
    }
    cout << "**" << endl;
    for (int p = 1; p <= n-1; p++) {
        cout << " ";
    }
    cout << "*" << endl;
}