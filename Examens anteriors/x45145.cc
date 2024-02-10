#include <iostream>
using namespace std;

int main () {
    int number;
    while (cin >> number and number >= 0) {
        int count = 1, m = 1, result = 0, o_number = number;
        while (number > 9) {
            ++count;
            number /= 10;
        }
        number = o_number;
        for (int i = 1; i <= count; ++i) {
            int digit = number%10;
            if (digit%2 != 0) {
                result += digit * m;
                m *= 10;
            }
            number /= 10;
        }
        cout << result << endl;
    }
}