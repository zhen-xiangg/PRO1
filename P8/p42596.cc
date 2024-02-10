#include <iostream>
#include <vector>
using namespace std;
typedef vector<vector<int> > Matrix;

void min_max(const Matrix& mat, int& minimum, int& maximum) {
    int f = mat.size(), c = mat[0].size();
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            if (mat[i][j] < minimum) minimum = mat[i][j];
            else if (mat[i][j] > maximum) maximum = mat[i][j];
        }
    }
}

int main() {
    int n, m, count = 0, max_diference = 0, result_count = count, result_max_diference = max_diference;
    while (cin >> n >> m) {
        ++count;
        Matrix my_matrix(n, vector<int> (m));
        for (int h = 0; h < n; ++h) {
            for (int k = 0; k < m; ++k) {
                cin >> my_matrix[h][k];
            }
        }
        int maximum = my_matrix[0][0], minimum = my_matrix[0][0];
        min_max(my_matrix, minimum, maximum);
        max_diference = maximum - minimum;
        if (count == 1) {
            result_max_diference = max_diference;
            result_count = count;
        }
        else {
            if (max_diference > result_max_diference) {
                result_max_diference = max_diference;
                result_count = count;
            }
        }
    }
    cout << "la diferencia maxima es " << result_max_diference << endl;
    cout << "la primera matriu amb aquesta diferencia es la " << result_count << endl;
}