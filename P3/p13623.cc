#include <iostream>
using namespace std;

int main() {
    int f, c;
    cin >> f >> c;
    int sum = 0;
    for (int i = 1; i <= f; ++i) {
        for (int j =1; j <= c; ++j){
            char digit;
            cin >> digit;
            if ((i + j) % 2 == 0){
                sum += int(digit) - int('0');
            }
        }
    }
    cout << sum << endl;
}
