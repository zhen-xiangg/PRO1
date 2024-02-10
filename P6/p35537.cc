#include <iostream>
using namespace std;

int number(int n) {
    int result = 0;
    if (n < 10) result = n;
    else {
        n = number(n/10) % 10;
    }
    return result;
}

bool is_increasing(int n) {
    bool result = true;
    if (n < 10) result = true;
    else {
        if (number(n) > number(n/10)) result = false;
    }
    return result;
}

int main() {
    int n;
    while (cin >> n) {
        cout << is_increasing(n) << endl;
    }
}