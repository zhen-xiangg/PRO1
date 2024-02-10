#include <iostream>
#include <vector>
using namespace std;

int elements_comuns (const vector<int>& X, const vector<int>& Y) {
    int count = 0, i = 0, j = 0;
    while (i < X.size() and j < Y.size()) {
        if (X[i] == Y[j]) {
            count++;
            i++;
            j++;
        } else if (X[i] < Y[j]) {
            i++;
        } else {
            j++;
        }
    }
    return count;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        vector <int> r(n);
        for (int k = 0; k < n; ++k) {
            cin >> r[n];
        }
        vector <int> s(m);
        for (int h = 0; h < m; ++h) {
            cin >> s[m];
        }
        cout << elements_comuns(r,s) << endl;
    }
}