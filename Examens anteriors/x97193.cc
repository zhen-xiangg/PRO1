#include <iostream>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(2);
    double a, b, c, h;
    string word;
    while (cin >> word and word != "acabar") {
        if (word == "perimetro") {
            cin >> a >> b >> c;
            cout << a + b + c << endl;
        }
        if (word == "area") {
            cin >> b >> h;
            cout << (b*h)/2 << endl;
        }
    }
}