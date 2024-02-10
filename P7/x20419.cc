#include <iostream>
#include <vector>
using namespace std;

const int LENGTH_ALPHABET = 'z' - 'a' + 1; 

char letra_mas_frecuente(const string& s) {
    vector <int> lmf(LENGTH_ALPHABET, 0);
    int m = s.size();
    for (int i = 0; i < m; ++i) {
        ++lmf[s[i]-'a'];
    }
    int pos = 0, freq = 0;
    for (int i = 0; i < LENGTH_ALPHABET; ++i) {
        if (lmf[i] > freq) {
            pos = i;
            freq = lmf[i];
        }
    }
    char c = 'a' + pos;
    return c;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(2); 
    int n;
    while (cin >> n) {
        vector<string> a(n);
        int count = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            count += a[i].size();
        }        
        double media = count/double(n);
        cout << media << endl;
        for (int k = 0; k < n; ++k) {
            string s = a[k];
            if (s.size() >= media) {
                cout << s << ": " << letra_mas_frecuente(s) << endl;
            }
        }
    }
}