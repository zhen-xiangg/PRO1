#include <iostream>
using namespace std;

void print(int n, int m) {
    if (n == 0) cout << n;
    else {
        if (n < 2) {
            cout << n;
            print(n - 1, m);
            cout << n;
        }
        else {
            for (int i = 0; i < m; ++i) {
                cout << n;
                print(n - 1, m - 1);
            }
            cout << n;
        }
    }
}

int main() {
    int n;
    while (cin >> n) {
        print(n, n);
        cout << endl;
    }
}