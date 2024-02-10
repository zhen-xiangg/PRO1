#include <iostream>
using namespace std;

int simpleAlternatedSum(int n) {
    if (n == 1) return 1;
    else {
        if (n%2 == 0) return -n + simpleAlternatedSum(n - 1);
        else return +n + simpleAlternatedSum(n - 1);
    }
}

int main() {
    int n;
    while (cin >> n) {
        cout << simpleAlternatedSum(n) << endl;
    }
}