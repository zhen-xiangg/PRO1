#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> row; 
typedef vector<row> matrix; 
typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& a, const Matrix& b){
    int n = a.size();
    Matrix c(n, vector<int>(n, 0));
    for (int j = 0; j < n; ++j) {
        for (int k = 0; k < n; ++k) {
            for (int i = 0; i < n; ++i) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return c;
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
        matrix result = product(my_matrix, my_matrix);
        for (int k = 0; k < n; ++k) {
            for (int l = 0; l < n; ++l) {
                cout << result[k][l] << " ";
            }
            cout << endl;
        }
    }
}