#include <iostream>
#include <vector>
using namespace std;

bool conte(string s1, string s2) {
    int m1 = s1.size();
    int m2 = s2.size();
    bool found = false;
    int i = 0;
    while (i < m1 - m2 +1 and not found) {
        if (s1[i] == s2[0]) {
            int j = 1;
            found = true;
            while (j < m2 and found) {
                if (s1[i+j] != s2[j]) found = false;
                ++j;
            }
        }
        ++i;
    }
    return found;
}

int main() {
    int p;
    while (cin >> p) {
        vector<string> a(p);
        for (int i = 0; i < p; ++i) {
            cin >> a[i];
        }
        for (int c = 0; c < p; ++c) {
            cout << a[c] << ':';
            for (int b = 0; b < p; ++b) {
                if (conte(a[c], a[b])) cout << " " << a[b];
            }
            cout << endl;
        }   
    }
}