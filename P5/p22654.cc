#include <iostream>
using namespace std;

void decompose(int n, int& h, int& m, int& s) {
    h = 0;
    m = n/60;
    s = n%60;
    if (m >= 60){
        h = m/60;
        m = m%60;
    }
}

int main() {
    int n, h = 0, m = 0, s = 0;
    while (cin >> n) {
        decompose( n, h, m, s);
        cout << h << " " << m << " " << s << endl;
    }
}