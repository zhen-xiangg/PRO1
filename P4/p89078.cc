#include <iostream>
using namespace std;

int main () {
    int position = 0, number;

    while (cin >> number) {
        ++ position;
        if (number % 2 == 0) {
            cout << position << endl;
            return 0;
        }
    }
    cout << endl;
}
