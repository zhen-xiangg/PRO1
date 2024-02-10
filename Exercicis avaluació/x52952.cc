#include <iostream>
using namespace std;

int main () {
    int n, m, side;
    while (cin >> n >> m >> side) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j< m*side + m + 1; ++j){
                cout << "#";
            }
            cout << endl;
            for (int k = 0; k < side; ++k) {
                for (int z = 0; z < m; ++z) {
                    cout << "#";
                    for (int l = 0; l < side; ++l) {
                        cout << " ";
                    }
                }
                cout << "#" << endl;
            }
        }
        for (int j = 0; j< m*side + m + 1; ++j){
                cout << "#";
            }
        cout << endl << endl;
    }
}
