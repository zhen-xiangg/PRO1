#include <iostream>
using namespace std;

void swap2(int& a, int& b) {
    int first = a, second = b;
    a = second;
    b = first;
}

int main () {
    int x, y;
    while (cin >> x >> y) {
        swap2(x, y);
        cout << x << " " <<  y << endl;
    }
}