#include <iostream>
using namespace std;

int reduction_of_digits(int x) {
    int result;
    if (x < 10) result = x;
    else result = x % 10 + reduction_of_digits(x/10);
    if (result > 9) result = result % 10 + reduction_of_digits(result/10);
    return result;
}

int main() {
    int n;
    while (cin >> n) {
        cout << reduction_of_digits(n) << endl;
    }
}