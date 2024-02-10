#include <iostream>
using namespace std;

int main () {
    int number_1 = 0, number_2 = 0, number_3 = 0, count = 0;
    bool found = false;
    while (cin >> number_3 and not found and number_3 != 0) {
        if (count == 0) {
            number_1 = number_3;
            ++count;
        }
        else if (count == 1) {
            number_2 = number_3;
            ++count;
        }
        else if (count > 1) {
            if ((number_2 > number_1) and (number_2 > number_3) and (number_2 > 3143)) found = true;
            number_1 = number_2;
            number_2 = number_3;
        }
    }
    if (found) cout << "YES" << endl;
    else if (!found) cout <<  "NO" << endl;
}