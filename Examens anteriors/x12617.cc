#include <iostream>
#include <vector>
using namespace std;

// Pre: dos palabras minúsculas; un entero no negativo d
// Post: retorna true si las dos palabras son d-compatibles, false en caso contrario
bool d_compatibles(const string &a, const string &b, int d) {
    int diference = 0, n = a.size(), m = b.size();
    if (n != m) return false;
    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i]) ++diference; 
    }
    if (diference <= d) return true;
    else return false;

}

// Pre: un vector v de palabras en minúsculas; una palabra minúscula w; un entero no negativo d
// Post: retorna la primera palabra en v d-compatible con w; "--" en caso contrario
string palabra_compatible(const vector<string> &v, const string &w, int p) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        if (d_compatibles(v[i], w, p)) return v[i];
    }
    return "--";
}

int main() {
    int d;
    while (cin >> d) {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];

        }
        string s;
        while (cin >> s and s != "STOP") {
            cout << s << ": " << palabra_compatible(v, s, d) << endl;
        }
    }
}
