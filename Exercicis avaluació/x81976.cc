#include <iostream>
#include <vector>

using namespace std;

typedef vector <int> row_int;
typedef vector<row_int> Matrix_int;

typedef vector <char> row_char;
typedef vector<row_char> Matrix_char;

void read_matrix(Matrix_char &my_matrix, int f, int c) {
    for (int i = 0; i < f; ++i) {
        for (int j=0; j < c; ++j){
            cin >> my_matrix[i][j];
        }
    }
}

int main() {
    int f, c;
    while (cin >> f >> c) {
        Matrix_char my_original_matrix(f, row_char(c));
        Matrix_int my_f_matrix(f, row_int(10,0));
        Matrix_int my_c_matrix(10, row_int(c,0));
        Matrix_int my_changed_matrix(f, row_int(c,0));
        read_matrix(my_original_matrix, f, c);
        for (int i = 0; i < f; ++i){
            for (int j=0; j < c; ++j){
                ++my_f_matrix[i][int(my_original_matrix[i][j]) - '0'];
                ++my_c_matrix[int(my_original_matrix[i][j]) - '0'][j];
            }
        }
        for (int i = 0; i < f; ++i) {
            for (int j = 0; j < c; ++j) {                
                my_changed_matrix[i][j] = (my_f_matrix[i][int(my_original_matrix[i][j]) - '0'] + my_c_matrix[int(my_original_matrix[i][j]) - '0'][j])%10;
                cout << my_changed_matrix[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
}