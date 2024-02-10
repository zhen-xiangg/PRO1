#include <typeinfo>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

struct Circle {
    Point center;
    double radius;
};

double dist(const Point& a, const Point& b) {
    double x_result = a.x - b.x, y_result = a.y - b.y;
    return sqrt((x_result*x_result) + (y_result*y_result));
}

void move(Point& p1, const Point& p2) {
    p1.x = p1.x + p2.x;
    p1.y = p1.y + p2.y;
}

void scale(Circle& c, double sca) {
    c.radius *= sca;
}

void move(Circle& c, const Point& p) {
    c.center.x = c.center.x + p.x;
    c.center.y = c.center.y + p.y;
}

bool is_inside(const Point& p, const Circle& c) {
    return(dist(p, c.center) < c.radius);
}


int main() {
}
