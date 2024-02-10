#include <iostream>
#include <cmath>
using namespace std;

bool is_perfect(int n) {
    int divisor = 1;
    for (int i = 2; i*i <= n; ++i) {
        if (n%i == 0) divisor += i + n/i;
    }
    return (divisor == n and n != 0 and n != 1);
}

int main() {
    int n;
    while (cin >> n) {
        if (is_perfect(n)) cout << "true" << endl;
        else cout << "false" << endl;
    }
}