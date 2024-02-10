#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int number;
    while (cin >> number) {
        cout << "divisors of " << number << ":";
        for (int i = 1; i*i < number; ++i) {
            if (number % i == 0) {
                cout << " " << i;
            }
        }
        if (number == 1) cout << " " << number;
        if (number != 1) {
            for (int j = sqrt(number); j > 0; --j) {

                if (number % j == 0) cout << " " << number/j;
            }
        }
        cout << endl;
    }
}