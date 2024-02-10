#include <cmath>
#include <iostream>
using namespace std;

double dist_or(double x, double y) {
    double dist = sqrt((x*x)+(y*y));
    return dist;
}

int main () {
    double x,y;
    while (cin >> x >> y) {
        cout << dist_or (x,y) << endl;
    }
}