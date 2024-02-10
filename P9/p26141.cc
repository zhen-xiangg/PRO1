#include <iostream>
#include <vector>

using namespace std;

struct Racional {
  int num, den;
};

int mcd(int a, int b){
  while (b != 0) {
    int r = a%b;
      a = b;
      b = r; 
  }
  return a;
}

Racional simplify(int n, int d) {
  if (n == 0) d = 1;
  else {
    int mcd_1 = mcd(n,d);
    if (mcd_1 != 1){
      n /= mcd_1;
      d /= mcd_1;
    }
    if (d < 0) {
        n *= -1;
        d *= -1;
      }
    }
    Racional result;
    result.num = n;
    result.den = d;
    
    return result;
}

Racional suma(Racional& r1, Racional& r2) {
    Racional r;
    r.den = r1.den * r2.den;
    r.num = r1.num * r2.den + r2.num * r1.den;
    return simplify(r.num, r.den);
}

Racional multiplica(Racional& r1, Racional& r2) {
    Racional r;
    r.num = r1.num * r2.num;
    r.den = r1.den * r2.den;
    return simplify(r.num, r.den);
}

Racional divide(Racional& r1, Racional& r2) {
    Racional r;
    r.num = r1.num * r2.den;
    r.den = r1.den * r2.num;
    return simplify(r.num, r.den);
}

void Escriu_racional(Racional& r) {
    if (r.den == 1) cout << r.num << endl;
    else cout << r.num << "/" << r.den << endl;
}


int main() {
    Racional r1, r2;
    cin >> r1.num >> r1.den;
    r1 = simplify(r1.num, r1.den);
    string op;
    Escriu_racional(r1);
    while (cin >> op >> r2.num >> r2.den) {
        if (op == "add") r1 = suma(r1, r2);
        else if (op == "substract") {
            r2.num *= -1;
            r1 = suma(r1, r2);
        }
        else if (op == "multiply") r1 = multiplica(r1, r2);
        else if (op == "divide") r1 = divide(r1, r2);
        Escriu_racional(r1);
    }
}