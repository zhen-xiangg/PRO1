#include <iostream>
using namespace std;

int main () {
    int h0, m0, h1, m1;
    cin >> h0 >> m0 >> h1 >> m1;
    int start, final, result;
    if (h1 > h0) start = h0*60 + m0, final = h1*60 + m1, result = final - start;
    else if (h1 == h0) {
        if (m1>= m0) start = h0*60 + m0, final = h1*60 + m1, result = final - start;
        else start = (23-h0)*60 + (60-m0), final = h1*60 + m1, result = final + start;
    }
    else if (h1 < h0 and h0 != 0) start = (23-h0)*60 + (60-m0), final = h1*60 + m1, result = final + start;
    else start = (24-h0)*60, final = h1*60 + m1, result = final + start;
    int h2 = result/60, m2 = result%60;
    if (h2 < 10) cout << '0';
    cout << h2 << ':';
    if (m2 < 10) cout << '0';
    cout << m2 << endl;
}