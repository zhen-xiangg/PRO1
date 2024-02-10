#include <iostream>

using namespace std;

struct Fraccio {
    int num, den;   // sempre estrictament positius
};

int mcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

Fraccio simplify(int n, int d) {
    if (n == 0) {
        d = 1;
    } else {
        int mcd_1 = mcd(n, d);
        if (mcd_1 != 1) {
            n /= mcd_1;
            d /= mcd_1;
        }
        if (d < 0) {
            n *= -1;
            d *= -1;
        }
    }
    Fraccio result;
    result.num = n;
    result.den = d;

    return result;
}

Fraccio suma(const Fraccio& x, const Fraccio& y) {
    Fraccio r;
    r.den = x.den * y.den;
    r.num = x.num * y.den + y.num * x.den;
    return simplify(r.num, r.den);
}

void Escriu(const Fraccio& r) {
    cout << r.num << "/" << r.den << endl;
}

int main() {
    Fraccio r1, r2;
    char sym, op;

    cin >> r1.num >> sym >> r1.den;
    r1 = simplify(r1.num, r1.den);

    while (cin >> op and op != '=') {
        cin >> r2.num >> sym >> r2.den;
        r1 = suma(r1, r2);
    }

    Escriu(r1);
}