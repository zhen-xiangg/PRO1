#include <iostream>
using namespace std;

int main () {
    int number;
    while (cin >> number and number != 0) {
        int count = 1, o_number = number, result = 0;
        while (number > 9) {
            ++count;
            number /= 10; 
        }
        number = o_number;
        int m = 1;
        for (int i = 1; i <= count; ++i){
            int digit = number%10;
            if (digit%2 == 0) result += (digit + 1) * m;
            else if (digit%2 != 0) result += (digit) * m;
            number /= 10;
            m *= 10;
        }
        cout << result << endl;
    }
}