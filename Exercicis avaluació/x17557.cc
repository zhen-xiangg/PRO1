#include <iostream>
using namespace std;

int main () {
    char leter;
    int a = 0, c = 0, d = 0;
    int count_c = 0, count_d = 0;
    while (cin >> leter) {
        if (leter == 'a') ++a;
        else if (leter == 'b') {
            a = 0;
            c = 0;
            d = 0;
        }
        else if (leter == 'c' and a > 0) ++count_c;
        else if (leter == 'd') ++d;
        if (a > 0 and c > 0) {
            ++count_c;
        }
        if (leter == 'a' and d > 0) {
            count_d += d;
            ++a;
            d = 0;
        }
        
    }
    cout << count_c << " " << count_d << endl;
}