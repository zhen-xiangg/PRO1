#include <iostream>
using namespace std;

int main () {
    int n, sum = 0;
    char c1, c2, c3;
    cin >> n >> c1 >> c2;
    for (int i = 0; i < n; ++i) {
        cin >> c3;
        if (c1 <= c3 and c3 <= c2) ++sum;
    }
    cout << sum << endl;
}