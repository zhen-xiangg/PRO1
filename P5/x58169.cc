#include <iostream>
using namespace std;

void infoSequence(int& max, int& lpos) {
    int n, lpos_2 = 0, count = 1, position = 0;
    bool found_lpos_2 = false;
    for (int i = 0; i < 2; ++i) {
        while (cin >> n and n != 0) {
            if (count == 1) {
                ++position;
                if (n >= max) {
                    max = n;
                    lpos = position;
                }
            }
            if (count == 2 and !found_lpos_2) {
                ++position;
                if (n == max) {
                    lpos_2 = position;
                    found_lpos_2 = true;
                }
            }
        }
        if (n == 0) {
            ++count;
            position = 0;
        }
    }
    if (found_lpos_2) cout << max << " " << lpos << " " << lpos_2 << endl;
    else cout << max << " " << lpos << " " << '-' << endl;
}

int main () {
    int max = 0, lpos = 0;
    infoSequence(max, lpos);
}