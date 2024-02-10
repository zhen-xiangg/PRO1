#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenacio(const vector<int>& v1, const vector<int>& v2) {
    int n = v1.size();
    int m = v2.size();
    vector <int> a(n+m, 0);
    for (int i = 0; i < n; ++i) {
        a[i] = v1[i];
    }
    int p = 0;
    for (int j = n; j < n + m; ++j) {
        a[j] = v2[p];
        ++p;
    }
    return a;
}

int main() {
    int x, y;
    while (cin >> x >> y) {
        vector <int> r(x);
        for (int k = 0; k < x; ++k) {
            cin >> r[k];
        }
        vector <int> s(y);
        for (int h = 0; h < y; ++h) {
            cin >> s[h];
        }
        vector <int> g = concatenacio(r,s);
        int f = g.size();
        for (int b = 0; b < f; b++){
            cout <<g[b] << " ";
        }
        cout << endl;
    }
}