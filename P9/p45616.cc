#include <iostream>
using namespace std;

struct Clock {
    int h;      // hours (0<=h<24)
    int m;      // minutes (0<=m<60)
    int s;      // seconds (0<=s<60)
};

Clock midnight() {
    Clock c;
    c.h = 0;
    c.m = 0;
    c.s = 0;
    return c;
}

void increase(Clock& r) {
    ++r.s;
    if (r.s == 60) {
        r.s = 0;
        ++r.m;
    }
    if (r.m == 60) {
        r.m = 0;
        ++r.h;
    }
    if (r.h == 24) {
        r.h = 0;
    }
}
void print(const Clock& r) {
    if (r.h < 10) cout << '0' << r.h;
    else cout << r.h;
    cout << ':';
    if (r.m < 10) cout << '0' << r.m;
    else cout << r.m;
    cout << ':';
    if (r.s < 10) cout << '0' << r.s;
    else cout << r.s;
    cout << endl;
}

int main()
{
    Clock r = midnight();
    for (int i = 0; i <= 25 * 60 * 60; ++i) {
        print(r);
        increase(r);
    }
    return 0;
}