#include <iostream>
using namespace std;

int main () {
    int sum = 0, number;
    while(cin >> number and number >= 0) {
        int count = 1, o_number = number, d = 1;
        while (number > 9) {
            ++count;
            number /= 10;
            d *= 10;
        }
        int fisrt_num = o_number/d ,last_num = o_number%10;
        if (fisrt_num == last_num) {
            ++sum;
            cout << o_number << endl;
        }
    }
    cout << "total: " << sum << endl;
}