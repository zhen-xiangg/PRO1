#include <iostream>
using namespace std;

int main () {
    int numspaces, numrombes;
    while (cin >> numspaces >> numrombes) {
        for (int i = 0; i < numrombes; ++i) {
            for (int j = 0; j <= numspaces; ++j) {
                for (int k = 0; k < numspaces - j; ++k) {
                    cout << " ";
                }
                cout << "*";
                for (int m = j*2 -1; m > 0; m -= 1) {
                        cout << " ";
                    }
                if (j > 0) {
                    cout << "*";
                }
                cout << endl;                
            }
            for (int z = numspaces -1; z > 0; z -= 1) {
                for (int y = 0; y < numspaces - z; ++y) {
                    cout << " ";
                }
                cout << "*";
                for (int x = z*2 -1 ; x > 0; x -= 1) {
                        cout << " ";
                    }
                cout << "*" << endl;
            }
        }
        for (int a = 0; a < numspaces; ++a) {
            cout << " ";
        }
        cout << "*" << endl << endl;
    }
}