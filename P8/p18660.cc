#include <iostream>
#include <vector>
using namespace std;
typedef vector<char> row;
typedef vector<row> Matrix;

Matrix search(Matrix &matriu, string name, int w, int v, int fila, int columna) {
    bool found = true;
    int s = name.size();

    // Check horizontally
    if (v + s <= columna) {
        for (int a = 1; a < s and found; ++a) {
            if ((matriu[w][v + a] != name[a] and matriu[w][v + a] != char(int('A' - 'a' + name[a])))) {
                found = false;
            }
        }
    } else found = false;

    if (found) {
        for (int b = 0; b < s; ++b) {
            if ('a' <= matriu[w][v + b] and matriu[w][v + b] <= 'z') {
                matriu[w][v + b] = char(int('A' - 'a' + matriu[w][v + b]));
            }
        }
    }

    // Check vertically
    if (w + s <= fila) {
        found = true;
        for (int c = 1; c < s and found; ++c) {
            if (matriu[w + c][v] != name[c] and matriu[w + c][v] != char(int('A' - 'a' + name[c]))) {
                found = false;
            }
        }
    } 
    else found = false;

    if (found) {
        for (int d = 0; d < s; ++d) {
            if ('a' <= matriu[w + d][v] and matriu[w + d][v] <= 'z') {
                matriu[w + d][v] = char(int('A' - 'a' + matriu[w + d][v]));
            }
        }
    }

    // Check diagonally
    if (w + s <= fila and v + s <= columna) {
        found = true;
        for (int e = 1; e < s and found; ++e) {
            if (matriu[w + e][v + e] != name[e] and matriu[w + e][v + e] != char(int('A' - 'a' + name[e]))) {
                found = false;
            }
        }
    } else found = false;

    if (found) {
        for (int f = 0; f < s; ++f) {
            if ('a' <= matriu[w + f][v + f] and matriu[w + f][v + f] <= 'z') {
                matriu[w + f][v + f] = char(int('A' - 'a' + matriu[w + f][v + f]));
            }
        }
    }
    return matriu;
}

int main() {
    int x, m, n;
    bool primer = true;
    while (cin >> x >> m >> n) {
        if (!primer) cout << endl;
        else primer = false; 
        vector <string> a(x);
        for (int f = 0; f < x; ++f) {
            cin >> a[f];
        }
        Matrix my_matrix(m, row(n));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> my_matrix[i][j];
            }
        }
        while (x > 0) {
            --x;
            for (int k = 0; k < m; ++k) {
                for (int l = 0; l < n; ++l) {
                    if (my_matrix[k][l] == a[x][0] or my_matrix[k][l] == char('A' - 'a' + a[x][0])) {
                        my_matrix = search(my_matrix, a[x], k, l, m, n);
                    }
                }
            }
        }
        for (int p = 0; p < m; ++p) {
            for (int r = 0; r < n; ++r) {
                cout << my_matrix[p][r];
                if (r < n - 1) cout << " ";
            }
            cout << endl;
        }
    }
}