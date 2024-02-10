#include <iostream>
#include <cmath>
using namespace std;

int sum_of_digits(int x) {
    int result;
    if (x < 10) result = x;
    else result = x % 10 + sum_of_digits(x/10);
    return result;
}

bool is_perfect_prime(int n) {
    if (n < 10) return (n == 2 or n == 3 or n == 5 or n ==7);
    else {
        int count = 2;
        bool primer = true;
        while (primer and count <= sqrt(n)) {
            if (n % count == 0) primer = false;
            ++count;
        }
        if (primer) return is_perfect_prime(sum_of_digits(n));
        else return false;
    }
}

int main() {
    int n;
    while (cin >> n) {
        cout << is_perfect_prime(n) << endl;
    }
}
