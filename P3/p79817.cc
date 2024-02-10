#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        if ( b == 0){
            cout << 1 << endl;
        }
        else {
            int result = a;
            for (int i = 1; i < b; ++i) {
                result *= a;
            }
            cout << result << endl;
        }
    }
}
