#include <iostream>
using namespace std;

int main () {
    char x;
    bool found = false;
    while (cin >> x and x != '.') {
        if (x == 'a') {
            found = true;
        }
    }
    if (found) cout << "yes" << endl;
    else cout << "no" << endl;
}
