#include <iostream>
#include <vector>
using namespace std;

int evaluate(const vector<int>& p, int x) {
    int n = p.size();
    int result = 0;
    for (int i = n - 1; i > 0; --i) {
        result += p[i];
        result *= x;
    }
    result += p[0];
    return result;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << evaluate(a, 2) << endl; 
    }
}