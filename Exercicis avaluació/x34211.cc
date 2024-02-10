#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector <int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; 
        }
        string sentence;
        while (cin >> sentence) {
            int result = 0;
            for (int j = 0; j < n; ++j) {
                if (sentence[j] == '+') result += a[j];
                else result -= a[j];
            }
            cout << result << endl;
        }
    }
}