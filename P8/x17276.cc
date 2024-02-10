#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> row;
typedef vector<row> Matrix;

int main() {
    int n, m;
    while (cin >> n >> m) {
        Matrix my_matrix(n, row(m));

        // Initialize variables
        int i = 0, j = 0, original_i = 0, original_j = 0;
        
        for (int h = 0; h < n; ++h) {
            for (int k = 0; k < m; ++k) {
                cin >> my_matrix[h][k];
            }
        }
        
        cin >> i >> j;
        bool found = true;
        
        original_i = i;
        original_j = j;

        if ((n > 1 or m > 1) and found) {
            int movement;

            // nord-west
            if (i < j) movement = i;
            else movement = j;            
            for (int a = 1; a <= movement and found; ++a) {
                if (my_matrix[i][j] >= my_matrix[i-1][j-1]) found = false;
                --i;
                --j;
            }

            i = original_i;
            j = original_j;

            // nord-est
            if (m - j - 1 < i) movement = m - j - 1;
            else movement = i;
            for (int b = 1; b <= movement and found; ++b) {
                if (my_matrix[i][j] >= my_matrix[i-1][j+1]) found = false;
                    --i;
                    ++j;
            }

            // sud-west
            i = original_i;
            j = original_j;
            if (j < n - i - 1) movement = j;
            else movement = n - i - 1;
            for (int c = 1; c <= movement and found; ++c) {
                if (my_matrix[i][j] >= my_matrix[i+1][j-1]) found = false;
                    ++i;
                    --j;
            }

            // sud-est
            i = original_i;
            j = original_j;
            if (m - j - 1 < n - i - 1) movement = m - j - 1;
            else movement = n - i - 1;
            for (int d = 1; d <= movement and found; ++d) {
                if (my_matrix[i][j] >= my_matrix[i+1][j+1]) found = false;
                ++i;
                ++j;
            }
        }
        if (found) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}