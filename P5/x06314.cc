#include <iostream>
using namespace std;

void info_sequence(int& sum, int& last) {
    int n, count = 1, result = 1, prev = 0, c_sum;
    while (cin >> n) {
        if (count == 1) {
            if (n > 0) {
                sum += n;
                prev = n;
            }
            else if (n == 0) {
                c_sum = sum;
                last = prev;
                ++count;
                sum = 0;
            }
        }
        if (count > 1) {
            if (n > 0) {
                sum += n;
                prev = n;
            }
            else if (n == 0) {
                if (sum == c_sum and prev == last) ++result;
                sum = 0;
            }
        }
    }
    cout << result << endl;
}

int main() {
    int sum = 0, last = 0;
    info_sequence(sum, last);
}