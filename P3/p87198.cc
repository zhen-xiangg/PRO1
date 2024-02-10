#include <iostream>
using namespace std;

int main () {
    int n;
    while (cin >> n) {
        int n_k = n - 1;
        int n_j = n;
        for (int i = 1; i <= n; ++i) {
            for (int k = 1; k <= n_k; ++k){
            cout << ' ';
            }   
            for (int j = 1; j <= n_j; ++j) {
            cout << 'X';
            }
            n_k -= 1;
            n_j += 2;
            cout << endl;
        }
        n_j -= 2;
        if (n > 2) {
            for (int i = 1; i < n - 1; ++i) {
                for (int l = 1; l <= n_j; ++l) {
                cout << 'X';
            }
            cout << endl;
            }
        }
        n_k = 0;
        for (int i = 1; i <= n; ++i) {
            for (int k = 1; k <= n_k; ++k){
            cout << ' ';
            }   
            for (int j = 1; j <= n_j; ++j) {
            cout << 'X';
            }
            n_k += 1;
            n_j -= 2;
            cout << endl;
        }
        cout << endl;
    }
}


