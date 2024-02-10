#include <iostream>
using namespace std;

int main() {
  int n;
  bool found;
  int line = 0, result = 0;
  while (cin >> n) {
    found = false;
    bool ordenat = true;
    string ant, seg;
    for (int i = 0; i < n; ++i) {
        ant = seg;
        cin >> seg;
        if (seg < ant) ordenat = false;
    }
    found = ordenat;
    ++line;
    if (found) result = line;
  }
  if (result != 0)
    cout << "The last line in increasing order is " << result << "." << endl;
  else
    cout << "There is no line in increasing order." << endl;
}