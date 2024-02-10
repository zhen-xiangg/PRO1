#include <iostream>
using namespace std;

bool is_palindromic(int n) {
    bool result = true;
    int original_n = n, count = 1, mult = 1;
    while (n > 9) {
        ++count;
        mult *= 10;
        n /= 10;
    }
    for (int i = 0; i < (count/2); ++i){
        int a = (original_n/mult)%10, b = original_n%10;
        if (a != b) result = false;
        original_n /= 10;
        mult /= 100;
    }
    return result;
}

int main () {
    int n;
    while (cin >> n) {
        if (is_palindromic(n)) cout << "true" << endl;
        else cout << "false" << endl;
    }
}