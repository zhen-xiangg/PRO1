#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int idn;
    string name;
    double mark;        // The mark is a value between 0 and 10, or -1 that represents NP
    bool repeater;
};

void information(const vector<Student>& stu, double& min, double& max, double& avg) {
    int size = stu.size(), n_student = 0;
    min = 10, max = 0; avg = 0;
    for (int i = 0; i < size; ++i) {
        if (!stu[i].repeater and stu[i].mark != -1) {
            ++n_student;
            if (stu[i].mark < min) min = stu[i].mark;
            if (stu[i].mark > max) max = stu[i].mark;
            avg += stu[i].mark;
        }
    }
    if (n_student == 0) {
        min = -1;
        max = -1;
        avg = -1;
    }
    else avg /= n_student;
}

int main() {

}