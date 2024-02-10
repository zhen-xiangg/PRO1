#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int sum = 0;
        bool found = false;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }
        int count = 0;
        while (!found and count < n) {
            for (int j = n - 1; j >= 0; --j) {
            if (a[j] == sum - a[j]) found = true;
            ++count;
            }
        }
        if (found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
