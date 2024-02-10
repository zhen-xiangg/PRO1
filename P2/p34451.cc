#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int count = 0;
    int element;
    while (cin >> element) {
        if (element % number == 0) {
            ++count;
        }
    }
    cout << count << endl;
}
