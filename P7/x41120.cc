#include <iostream>
#include <vector>
using namespace std;

vector<int> calcula_cimas(const vector<int>& v){
    int m = v.size();
    vector<int> b;
    for (int j = 1; j < m - 1; ++j) {
        if (v[j-1] < v[j] and v[j] > v[j+1]) b.push_back(v[j]);
    }
    return b;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector <int> c = calcula_cimas(a);
        int count = c.size();
        cout << count << ":"; 
        if (count > 0) {
            for (int k = 0; k < count; ++k) {
                cout << " " << c[k];
            }
        }
        cout << endl;
        bool trobat = false;
        if (count > 1) {
            vector<int> d;
            for (int h = 0; h < count - 1; ++h) {
                if (c[h] > c[count - 1]) {
                    d.push_back(c[h]);
                    trobat = true;
                }
            }   
            if (trobat) {
                int p = c.size();
                cout << d[0];
                for (int l = 1; l < p - 1; ++l) {
                    cout << " " << d[l];
                }
                cout << endl;
            }
        }
        if (!trobat) cout << '-' << endl;
    }
}