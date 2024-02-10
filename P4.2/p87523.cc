#include <iostream>
using namespace std;

int main () {
    int count = 0;
    bool found = false;
    char leter;
    while (cin >> leter and !found and leter != '.') {
        if (count == 0) {
            if (leter == 'h') ++count;
        }
        else if (count == 1) {
            if (leter == 'e') ++count;
            else if (leter == 'h') count = 1;
            else count = 0;
        }
        else if (count == 2) {
            if (leter == 'l') ++count;
            else if (leter == 'h') count = 1;
            else count = 0;
        }
        else if (count == 3) {
            if (leter == 'l') ++count;
            else if (leter == 'h') count = 1;
            else count = 0;
        }
        else if (count == 4) {
            if (leter == 'o') found = true;
            else if (leter == 'h') count = 1;
            else count = 0;
        }
    }
    if (found) cout << "hello" << endl;
    else cout << "bye" << endl;
}