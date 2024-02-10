#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(10);
    int n, m;
    while (cin >> n >> m) {
        double result = 0;
        double c = m + 1;
        if (n > m) {
            for (int i = m + 1; i <= n; ++i) {
                result += 1/c;
                c = c + 1;
            }
        }
        cout << result << endl;
    }
}
