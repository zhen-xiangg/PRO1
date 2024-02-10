#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> row; 
typedef vector<row> matrix; 
typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& a, const Matrix& b){
    int n = a.size();
    int m = a[0].size();
    int p = b[0].size();
    Matrix c(n, vector<int>(p, 0));
    for (int j = 0; j < p; ++j) {
        for (int k = 0; k < m; ++k) {
            for (int i = 0; i < n; ++i) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return c;
}

int main() {
    int n, m, x, y;
    while (cin >> n >> m >> x >> y) {
        matrix my_matrix_1(n,row(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> my_matrix_1[i][j];
            }
        }
        matrix my_matrix_2(x,row(y));
        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < y; ++j) {
                cin >> my_matrix_2[i][j];
            }
        }
        matrix result = product(my_matrix_1, my_matrix_2);
        for (int k = 0; k < n; ++k) {
            for (int l = 0; l < y; ++l) {
                cout << result[k][l] << " ";
            }
            cout << endl;
        }
    }
}