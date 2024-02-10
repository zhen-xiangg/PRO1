#include <iostream>
using namespace std;

bool is_leap_year(int year) {
    bool result = false;
    if ((year % 4 == 0 and year % 100 != 0) or (year % 100 == 0 and (year / 100) % 4 == 0)) {
        result = true;
    } 
    return result;
}

bool is_valid_date(int d, int m, int y) {
    bool result = false;
    if (m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) {
        if (d > 0 and d <= 31) result = true;
    }
    else if (m == 4 or m == 6 or m == 9 or m == 11) {
        if (d > 0 and d <= 30) result = true;
    }
    else if (m == 2) {
        if (is_leap_year(y) and d > 0 and d <= 29) result = true;
        else if (!is_leap_year(y) and d > 0 and d < 29) result = true;
    }
    return result;
}

int main () {
    int d, m, y;
    while (cin >> d >> m >> y) {
        if (is_valid_date(d, m, y)) cout << "true" << endl;
        else cout << "false" << endl;
    }
}