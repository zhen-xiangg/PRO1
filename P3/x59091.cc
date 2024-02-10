#include <iostream>
using namespace std;

int main() {
    int n, m;
    bool first = true;
    while (cin >> n >> m) {
        if (first == false) {
            cout << endl;  
        }
        int num = 9;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                cout << num;
                if (num == 0) num = 9;
                else num -= 1;
            }
            cout << endl; 
        }
        first = false;
    }
}