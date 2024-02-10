#include <iostream>
using namespace std;

int main() {
  int n, h, m, s;
  cin >> n;
  h = 0;
  m = n/60;
  s = n%60;
  if (m >= 60){
    h = m/60;
    m = m%60;
  }
  cout << h << " " << m << " " << s << endl;
}