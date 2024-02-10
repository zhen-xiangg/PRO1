#include <iostream>
using namespace std;

int main () {
    char position;
    int x = 0, y = 0;
    while (cin >> position) {
        if (position == 'n') --y;
        if (position == 's') ++y;
        if (position == 'e') ++x;
        if (position == 'w') --x;
    }
    cout << "(" << x << ", " << y << ")" << endl;
}
