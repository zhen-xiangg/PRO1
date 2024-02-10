#include <iostream>
#include <vector>
using namespace std;
typedef vector<char> row;
typedef vector<row> Matrix;

int main() {
    int n, m;
    while (cin >> n >> m) {
        int count = 0;
        Matrix my_matrix(n, row(m));
        for (int h = 0; h < n; ++h) {
            for (int k = 0; k < m; ++k) {
                cin >> my_matrix[h][k];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (my_matrix[i][j] == ':') {
                    if (j + 2 < m and my_matrix[i][j + 1] == '-' and my_matrix[i][j + 2] == ')') ++count;
                    if (j - 2 >= 0 and my_matrix[i][j - 1] == '-' and my_matrix[i][j - 2] == '(') ++count;
                }
                else if (my_matrix[i][j] == '"') {
                    if (i + 2 < n and my_matrix[i + 1][j] == '|' and my_matrix[i + 2][j] == 'v') ++count;
                    if (i - 2 >= 0 and my_matrix[i - 1][j] == '|' and my_matrix[i - 2][j] == '^') ++count;
                }
            }
        }
        cout << count << endl;
    }
}
