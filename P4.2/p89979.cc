#include <iostream>
using namespace std;

int main() {
    int n;
    bool ordenat = false;
    int line = 0;
    while (not ordenat and cin >> n) {
        ++line;
        ordenat = true;
        if (n > 0 and ordenat) {
            string  ant, seg;
            cin >> ant;
            for (int i = 1; i < n; ++i) {
                cin >> seg;
                if (seg < ant) ordenat = false;
                ant = seg;
            }            
        }
    }
    if (ordenat) cout << "The first line in increasing order is " << line << "." << endl;
    else cout << "There is no line in increasing order." << endl;
}
