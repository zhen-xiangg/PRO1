#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

double dist(const Point& a, const Point& b) {
    double x_result = a.x - b.x, y_result = a.y - b.y;
    return sqrt((x_result*x_result) + (y_result*y_result));
}

int main() {

}
