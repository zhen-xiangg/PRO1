#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int i = 1;
    while (i <= 10) {
        cout << number << "*" << i << " = " << number*i << endl;
        i = i + 1;
    }
}