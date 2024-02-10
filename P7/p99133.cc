#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector<string> a(n);
        for (int i = 0; i< n; ++i) {
            cin >> a[i];
        }
        for (int j = n-1; j >= 0; --j) {
            string s = a[j];
            int m = s.size();
            vector<string> b(m);
            for (int k = m - 1; k >= 0; --k) {
                cout << s[k];
            }
            cout << endl;
        }
    }
} 