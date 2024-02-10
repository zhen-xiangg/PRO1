#include <iostream>
using namespace std;

void cross(int n, char c) {
    int s = n/2;
    for (int i = 0; i < s; ++i) {
        for (int j = 0; j < s; ++j) {
            cout << " ";
        }
        cout << c << endl;
    } 
    for (int x = 0; x < n; ++x) {
        cout << c;
    }
    cout << endl;
    for (int y = 0; y < s; ++y) {
        for (int z = 0; z < s; ++z) {
            cout << " ";
        }
        cout << c << endl;
    } 
}

int main() {
    int n;
    char c;
    while (cin >> n >> c) {
        cross(n, c);
    }
}