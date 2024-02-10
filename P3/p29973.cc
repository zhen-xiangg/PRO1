#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string result = "*";
    for (int i = 1; i <= n; ++i) {
        cout << result << endl;
        result += "*";
    }
}
