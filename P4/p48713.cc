#include <iostream>
using namespace std;
#include <cmath> 

int main() {
  int number_1, number_2;
  cin >> number_1;
  for (int i = 0; i < number_1; ++i) {
    cin >> number_2;
    int count = 2;
    bool primer = true;
    while (primer and count <= sqrt(number_2)) {
      if (number_2 % count == 0) primer = false;
      ++count;
    }
    if (!primer or number_2 == 1 or number_2 == 0) cout << number_2 << " is not prime" << endl;
    else cout << number_2 << " is prime" << endl;
  }
}