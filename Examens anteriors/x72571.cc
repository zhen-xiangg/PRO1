#include <iostream> 
using namespace std;

int main () {
    char digit;
    int f, c, total = 0, impar = 0;
    cin >> f >> c;
    for (int i = 1; i <= f; ++i) {
        for (int j = 1; j <= c; ++j) {
            cin >> digit;
            total += int(digit) - int('0');
            if (i%2 != 0) impar += int(digit) - int('0');
        }
    }
    cout << int(total) << " " << int(impar) << endl;
}