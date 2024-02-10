#include <iostream>
#include <vector>
using namespace std;

struct Time {
    int hour, minute, second;
};

void one_second(const Time& t, Time& t1, Time& t2) {
    t1.second = t.second + 1;
    t2.second = t.second - 1;
    if (t1.second == 60) {
        t1.second = 0;
        ++t1.minute;
    }
    if (t1.minute == 60) {
        t1.minute = 0;
        ++t1.hour;
    }
    if (t1.hour == 24) {
        t1.hour = 0;
    }
    if (t2.second == -1) {
        t2.second = 59;
        --t2.minute;
    }
    if (t2.minute == -1) {
        t2.minute = 59;
        --t2.hour;
    }
    if (t2.hour == -1) {
        t2.hour = 23;
    }
}
void print(const Time& r) {
    cout << r.hour;
    cout << ' ';
    cout << r.minute;
    cout << ' ';
    cout << r.second;
    cout << endl;
}

int main() {
    Time t, t1, t2;
    while (cin >> t.hour >> t.minute >> t.second) {
        t1 = t;
        t2 = t;
        one_second(t, t1, t2);
        print(t1);
        print(t2);
    }
}
