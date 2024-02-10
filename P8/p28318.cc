#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> row; 
typedef vector<row> matrix; 

int main() {
    int m, n;
    while (cin >> n >> m) {
        matrix my_matrix(n,row(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> my_matrix[i][j];
            }
        }
        string frase;
        while (cin >> frase) {
            int x, y;
            if (frase == "fila") {
                cin >> x;
                cout << "fila " << x << ":";
                x = x - 1;
                for (int h = 0; h < m; ++h) {
                    cout << " " << my_matrix[x][h]; 
                }
                cout << endl;
            }
            if (frase == "columna") {
                cin >> y;
                cout << "columna " << y << ":";
                y = y - 1;
                for (int l = 0; l < n; ++l) {
                    cout << " " << my_matrix[l][y]; 
                }
                cout << endl;
            }
            if (frase == "element") {
                cin >> x >> y;
                cout << "element " << x << " " << y << ":";
                x = x - 1;
                y = y - 1;
                cout << " " << my_matrix[x][y] << endl;
            }
        }
    }
}