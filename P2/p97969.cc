#include <iostream>
using namespace std;

int main() {
    char ch;
    int count = 0;
    while (cin >> ch and ch != '.') {
        if (ch == 'a') {
            ++count;
        }
    }
    cout << count << endl;
}