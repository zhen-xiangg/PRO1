#include <iostream>
#include <vector>
using namespace std;

vector<bool> pos_rampas (const vector <int>& v) {
    int m = v.size();
    vector <bool> c(m,0);
    for (int i = 0; i < m - 2; ++i){
        if ((v[i] < v[i+1] and v[i+1] < v[i+2]) or (v[i] > v[i+1] and v[i+1] > v[i+2])) c[i] = true; 
    }
    return c;
}

int pot_conflictivas (const vector <bool>& b) {
    int conflictivas = 0;
    int r = b.size();
    for (int h = 0; h < r; ++h) {
        if (b[h] == 1 and b[h] == b[h+1]) ++conflictivas;
        if (b[h] == 1 and b[h] == b[h+2]) ++conflictivas;
    }
    return conflictivas;
}

int main() {
    int n;
    while (cin >> n) {
        vector <int> a(n);
        for (int j = 0; j < n ; ++j) {
            cin >> a[j];
        }
        vector <bool> c = pos_rampas(a);
        cout << "posiciones con rampa:";
        for (int k = 0; k < n - 1; ++k) {
            if (c[k] == 1) cout << " " << k;
        }
        cout << endl;
        cout << "potencialmente conflictivas: " << pot_conflictivas(c) << endl;
        cout << "---" << endl;
    }
}