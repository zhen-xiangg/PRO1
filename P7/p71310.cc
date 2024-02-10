#include <iostream>
#include <vector>
using namespace std;

double scalar_product(const vector<double>& u, const vector<double>& v) {
    double result = 0, n = u.size();
    for (int j = 0; j < n; ++j) {
        result += v[j] * u[j];
    }
    return result;
}

int main() {
    int n;
    while (cin >> n) {
        vector<double> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<double> b(n);
        for (int k = 0; k < n; ++k) {
            cin >> b[k];
        }
        cout << scalar_product(a,b) << endl;
    }
}
