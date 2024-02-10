#include <iostream>
using namespace std;

int main () {
    int height, width;
    while (cin >> height >> width) {
        while (height > 0) {
            for (int j = 0; j < width / 2 and height > 0; ++j) {
                for (int k = 0; k < j; ++k) {
                    cout << '*';
                }
                for (int l = 1; l <= width / 2; ++l) {
                    cout << '#';
                }
                for (int m = 1; m <= width/2 - j; ++m) {
                    cout << '*';
                }
                cout << endl; 
                --height;
            }
            for (int z = 0; z < width / 2 and height > 0; ++z) {
                for (int y = 0; y < (width/2) - z; ++y) {
                    cout << '*';
                }
                for (int x = 1; x <= width / 2; ++x) {
                    cout << '#';
                }
                for (int v = 0; v < z; ++v) {
                    cout << '*';
                }
                cout << endl; 
                --height;
            }
        }
        cout << endl;
    }
}   
