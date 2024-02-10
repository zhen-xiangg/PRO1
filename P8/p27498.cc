#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> row; 
typedef vector<row> matrix; 
typedef vector< vector<int> > Matrix;

void swap(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}

void transpose(Matrix& m) {
    int n = m.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(m[i][j], m[j][i]);
        }
    }
}

int main() {
    int n;
    while (cin >> n) {
        matrix my_matrix(n,row(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> my_matrix[i][j];
            }
        }
        transpose(my_matrix);
        for (int k = 0; k < n; ++k) {
            for (int l = 0; l < n; ++l) {
                cout << my_matrix[k][l];
            }
            cout << endl;
        }
    }
}