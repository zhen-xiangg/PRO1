#include <iostream>
#include <vector>

using namespace std;

struct Rational {
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

Rational rational(int n, int d) {
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
    Rational result;
    result.num = n;
    result.den = d;
    
    return result;
}


int main() {

}
