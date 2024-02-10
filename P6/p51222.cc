#include <iostream>
using namespace std;

int number_of_digits(int n) {
    int result;
    if (n < 10) result = 1;
    else {
        result = number_of_digits(n/10) + 1;
    }
    return result;
}

int main () {
    int n;
    while (cin >> n) {
        cout << number_of_digits(n) << endl;
    }
}