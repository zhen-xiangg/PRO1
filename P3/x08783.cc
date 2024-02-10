#include <iostream>
using namespace std;

int main() {
    int b, n;
    while (cin >> b >> n) {
        int count = 1; 
        while (n >= b) {
            ++ count;
            n = n/b;
        }
        cout << count << endl;
    }
}
