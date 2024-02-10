#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    int count = 2;
    bool prime = true;
    if (n == 1 or n == 0) prime = false;
    else {
        while (prime and count <= sqrt(n)) {
            if (n % count == 0) prime = false;
            ++count;
        }
    }
    return prime;
}

int main() {
    int n;
    while (cin >> n) {
        bool found = false;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int count = 1;
        while (!found and count < n) {
            for (int j = n - 1; j > 0; --j) {
                int num = 1;
                while (! found and num <= j) {
                    if (is_prime(a[j] + a[j - num])) found = true;
                    ++num;
                }
                ++count;
            }
        }
        if (found) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}