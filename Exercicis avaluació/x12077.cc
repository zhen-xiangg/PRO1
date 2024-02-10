#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> RowInt;
typedef vector<RowInt> MatrixInt;

typedef vector<char> RowChar;
typedef vector<RowChar> MatrixChar;

int get(const MatrixInt &mat, int a, int b){
	if (a < 0 or b < 0) return 0;
	else return mat[a][b];
}	

int couthappyface(const MatrixChar &matriu, int f, int c){
	const char C1 = ':';
	const char C2 = '-';
	const char C3 = ')';
	
	MatrixInt     count_c1(f,RowInt(c,0)); 
	MatrixInt   count_c2c1(f,RowInt(c,0)); 
	MatrixInt count_c3c2c1(f,RowInt(c,0)); 
	
	for(int i = 0; i < f; ++i){
		for(int j = 0; j < c; ++j){
			count_c1[i][j] = get(count_c1,i-1,j) + get(count_c1, i, j-1) - get(count_c1, i-1, j-1); 
			if(matriu[i][j] == C1) count_c1[i][j] += 1;
			count_c2c1[i][j] = get(count_c2c1,i-1,j) + get(count_c2c1, i, j-1) - get(count_c2c1, i-1, j-1);
			if(matriu[i][j] == C2) count_c2c1[i][j] += get(count_c1, i-1,j-1);
			count_c3c2c1[i][j] = get(count_c3c2c1,i-1,j) + get(count_c3c2c1, i, j-1) - get(count_c3c2c1, i-1, j-1);
			if(matriu[i][j] == C3) count_c3c2c1[i][j] += get(count_c2c1, i-1,j-1);
		}
	}
	return count_c3c2c1[f-1][c-1];
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        MatrixChar my_matrix(n, RowChar(m));
        for (int h = 0; h < n; ++h) {
            for (int k = 0; k < m; ++k) {
                cin >> my_matrix[h][k];
            }
        }
        cout << couthappyface(my_matrix, n, m) << endl;
    }
}
