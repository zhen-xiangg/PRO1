#include <iostream>
using namespace std;

int main () {
    int n, number, count = 1;
    cin >> n;
    while (cin >> number) {
        if (count == n) {
            cout << "At the position " << n <<" there is a(n) " << number << "." << endl;
            return 0;
        }
        ++count;
    }
}
