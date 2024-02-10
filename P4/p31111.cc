#include <iostream>
using namespace std;

int main () {
    char seq;
    int opened = 0;
    int closed = 0;
    bool correct = true;
    while (correct and cin >> seq) {
        if (seq == '(') ++opened;
        else {
            ++closed;
            if (closed > opened) correct = false;
        }
    }
    if (correct and opened == closed) cout << "yes" << endl;
    else cout << "no" << endl;
}