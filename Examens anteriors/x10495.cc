#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriz;

bool cmp(const Fila& a, const Fila& b){
    int n = a.size();
    for (int i = 0; i < n; ++i){
        if (a[i]!=b[i]) return a[i] > b[i];
        
    }
    return false;
}

int main(){
    int m, n;
    while (cin >> m >> n){
        Matriz mat(n, Fila(m));
        for (int i = 0; i < m; ++i){
            for (int j=0; j<n; ++j) cin >> mat[j][i];
        }
        sort (mat.begin(), mat.end(), cmp);
        cout << mat[1][0];
        for (int i = 1; i < m; ++i) {
            cout << ' ' << mat[1][i];
        }
        cout << endl << endl;
    }
}