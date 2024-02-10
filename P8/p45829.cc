#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> row; 
typedef vector<row> matrix; 

int main() {
    int m, n;
    while (cin >> m >> n) {
        int count = 0;
        matrix my_matrix(m+1,row(n+1,0));
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                cin >> my_matrix[i][j];
            }
        }
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (my_matrix[i-1][j] == 0 and my_matrix[i][j-1] == 0 and my_matrix[i][j] > 0) ++count;
            }
        }
        cout << count << endl;
    }
}