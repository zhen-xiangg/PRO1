#include <iostream>
#include <cmath>
using namespace std;

void factor(int n, int& f, int& q) {
    int i = 2;
    f = n;
    q = 1;
    while (i*i <= n) {
        if (n%i == 0) {
            n = n/i;
            int comptador = 1;
            while (n%i == 0) {
                n = n/i;
                ++ comptador;
            }
            if (comptador > q or i < f) {
                q = comptador;
                f = i;
            }
        }
    ++i;
    }
}

int main () {
    int n, f = 1, q = 0;
    while (cin >> n) {
        factor(n, f, q);
        cout << f << " " << q << endl;
    }
}