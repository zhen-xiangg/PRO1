#include <iostream>
using namespace std;

int main() {
    int x;
    while (cin >> x) {
        int oddPart = 0, evenPart = 0;
        int multiplier_a = 1, multiplier_b = 1;
        int y = 0;
        while (x > 0) {
            int digit = x % 10;  
            if (digit != 0) {
                if (digit % 2 == 0) {
                    evenPart = evenPart + digit * multiplier_a;
                    multiplier_a *= 10;
                } else {
                    oddPart = oddPart + digit * multiplier_b;
                    multiplier_b *= 10;
                }
            }
            x = x / 10;
        }
        y = oddPart * multiplier_a + evenPart;
        cout << y << " " << y * 2 << endl;
    }
}
