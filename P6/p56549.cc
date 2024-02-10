#include <iostream>
using namespace std;

void base(int n, int b) { 
    int result;
    if (n < b) {
        if (n > 9) {
            cout << char(int('A') + (n-10));
        }       
        else cout << n;
    }
    else {
        base(n/b, b);
        result = n%b;
        if (result > 9) {
            cout << char(int('A') + (result-10));
        }       
        else cout << result;
    }
}

int main() {
    int n;
    while (cin >> n) {
        cout << n << " = ";
        base(n, 2);
        cout << ", ";
        base(n, 8);
        cout << ", " ;
        base(n, 16);
        cout << endl; 
    }
}
