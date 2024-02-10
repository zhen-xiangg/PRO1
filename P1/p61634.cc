#include <iostream>
using namespace std;

int main() {
  int years;
  string result;
  cin >> years;
  if ((years%4 == 0 and years%100 !=0) or (years%100 == 0 and (years/100)%4 ==0)){
    result = "YES";
  }
  else{
    result = "NO";
  }
  cout << result << endl;
}