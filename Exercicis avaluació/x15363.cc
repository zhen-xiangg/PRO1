#include <iostream>
using namespace std;

void rombes(int n, int m) {
    if (n == 1) {
        for (int j = 0; j < m; ++j){
            cout << " ";
        }
        cout << '*' << endl;
    }
    else {
        rombes(n - 1, m);
        for (int z = 1; z < n; ++z) {
            for (int j = 0; j < m - z; ++j){
                cout << " ";
            }
            for (int k = 0; k < 2*z +1; ++k){
                cout << '*';
            }
            cout << endl;
        }
        for (int y = n - 2; y > 0; --y) {
            for (int j = - y + m; j > 0; --j){
                cout << " ";
            }
            for (int k = 0; k < 2*y + 1; ++k){
                cout << '*';
            }
            cout << endl;
        }
        rombes(n - 1, m);
    }
}

int main () {
    int n;
    while (cin >> n) {
        rombes(n, n - 1);
        cout << endl;
    }
}