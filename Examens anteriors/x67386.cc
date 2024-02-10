#include <iostream>
using namespace std;

int main () {
    string p, s;
    bool found = false;
    int position = 0;
    cin >> p;
    while (!found and cin >> s) {
        ++position;
        if (s == p) {
            found = true;
        }
    }
    if (found) cout << position << endl;
    else cout << "No existe" << endl;
}
