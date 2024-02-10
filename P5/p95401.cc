#include <cmath>
#include <iostream>
using namespace std;

bool is_leap_year(int year) {
    if ((year % 4 == 0 and year % 100 != 0) or (year % 100 == 0 and (year / 100) % 4 == 0)) {
        return true;
    } 
    else {
        return false;
    }
}

int main() {
    int x;
    while (cin >> x) {
        if (is_leap_year(x))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}