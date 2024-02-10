#include <cmath>
#include <iostream>
using namespace std;

int sum_min_max(int x, int y, int z) {
    int max = 0, min = 0;
    if (x >= y and x >= z) {
        max = x;
    }
    else if (y >= z and y >= x) {
        max = y;
    }
    else if (z >= y and z >= x) {
        max = z;
    }
    if (x <= y and x <= z) {
        min = x;
    }
    else if (y <= z and y <= x) {
        min = y;
    }
    else if (z <= y and z <= x) {
        min = z;
    }
    int sum = max + min;
    return sum;
}

int main () {
    int x, y, z;
    while (cin >> x >> y >> z) {
        cout << sum_min_max(x, y, z) << endl;
    }
}