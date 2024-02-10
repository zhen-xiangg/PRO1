#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int o_n = n, count = 1, result = 0, m = 1;
        while (n>9) {
            ++count;
            n /= 10;
        }
        n = o_n;
        for (int i= 1; i <= count; ++i) {
            int digit = n%10;
            if (digit%2 == 0) result += (digit + 1) * m;
            else result += digit * m;
            m *= 10;
            n /= 10;
        }
        cout << result << endl;
    }
}