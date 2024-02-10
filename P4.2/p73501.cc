#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int number_1, number_2, count = 0;
        cin >> number_1;
        while (cin >> number_2 and number_2 != 0) {
            cout << number_1 << " " << number_2 << endl;
            if (number_1 < number_2 ) ++count;
            number_1 = number_2;
        }
        cout << count << endl;
    }
}