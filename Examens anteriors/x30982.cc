#include <iostream>
using namespace std;

int main () {
    int d;
    cin >> d;
    int num;
    bool found = false;
    while (!found and cin >> num) {
        int count = 1, sum = 0, o_num = num;
        while (num  > 9) {
            ++count;
            num /= 10;
        }
        num = o_num;
        for (int i = 1; i <= count; ++i) {
            int digit = num%10;
            if (digit == d) ++sum;
            num /= 10;
        }
        if (sum%2 == 0) {
            found = true;
            cout << o_num << endl;
        }
    }
    if (!found) cout << "no d-par" << endl;
}