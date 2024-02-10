#include <iostream>
using namespace std;

int main () {
    int number;
    bool found = false;
    while (cin >> number and !found) {
        int count = 1, sum = 0, o_number = number;
        while (number>9) {
            ++count;
            number /= 10;
        }
        number = o_number;
        for(int i = 1; i <= count; ++i) {
            int digit = number%10;
            if (digit%2 == 1) sum += digit;
            number /=10;
        }
        if (sum % 2 == 0 or sum == 0) {
            found = true;
            cout << o_number << endl;
        }
    }
    if (!found) cout << "no impar-par" << endl;
}