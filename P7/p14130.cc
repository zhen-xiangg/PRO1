#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int count = 0;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; ++i) {
            if (a[i] == a[n - 1]) ++count;
        }
        cout << count << endl;
    }
}