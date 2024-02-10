#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Slot {
    vector<string> listsubjects;
    vector<string> listteachers;
};

typedef vector<vector<Slot> > TableSlots;

struct Aux {
    string subject;
    string teacher;
    string day;
    int ini;
    int fi;
};

void mySetw(int width, int num) {
    int length = 1;
    int temp = num;
    while (temp /= 10) length++;
    int space = width - length;
    for (int i = 0; i < space; ++i) cout << ' ';
    cout << num;
}

int nday(const string name) {
    if (name == "monday") return 0;
    if (name == "tuesday") return 1;
    if (name == "wednesday") return 2;
    if (name == "thursday") return 3;
    if (name == "friday") return 4;
    return -1;
}

bool order(const Aux &a, const Aux &b) {
    return a.teacher < b.teacher;
}

void print_sub(const TableSlots &t, int hmin, int hmax) {
    cout << "number of subjects per slot:" << endl;
    cout << " h    monday   tuesday wednesday  thursday    friday" << endl;
    for (int h = hmin; h <= hmax; ++h) {
        mySetw(2, h);
        for (int d = 0; d < 5; ++d) {
            mySetw(10, t[h][d].listsubjects.size());
        }
        cout << endl;
    }
}

void print_tea(const vector<vector<int> > &teacherOccupancy, int hmin, int hmax, int conflict) {
    cout << "number of teachers per slot:" << endl;
    cout << " h    monday   tuesday wednesday  thursday    friday" << endl;
    for (int h = hmin; h <= hmax; ++h) {
        mySetw(2, h);
        for (int d = 0; d < 5; ++d) {
            mySetw(10, teacherOccupancy[h][d]);
        }
        cout << endl;
    }

    cout << "number of replacements needed to avoid conflicts:" << endl;
    cout << conflict << endl;
}

int main() {
    Aux aux;
    vector<Aux> all_teachers;
    TableSlots llist(24, vector<Slot>(5));  
    vector<vector<int> > teacherOccupancy(24, vector<int>(5, 0)); 

    int hmax = 0, hmin = 24;
    int conflict = 0;

    while (cin >> aux.subject >> aux.teacher >> aux.day >> aux.ini >> aux.fi) {
        all_teachers.push_back(aux);
        for (int j = aux.ini; j < aux.fi; ++j) {
            llist[j][nday(aux.day)].listsubjects.push_back(aux.subject);
            llist[j][nday(aux.day)].listteachers.push_back(aux.teacher);
        }
        int p = aux.fi - 1;
        if (p > hmax) hmax = p;
        if (aux.ini < hmin) hmin = aux.ini;
    }

    sort(all_teachers.begin(), all_teachers.end(), order);
    string first = all_teachers[0].teacher;
    vector<vector<bool> > zero(24, vector<bool>(5, false)); 
    vector<vector<bool> > occupancy(24, vector<bool>(5, false));  

    for (int k = 0; k < all_teachers.size(); ++k) {
        if (all_teachers[k].teacher != first) {
            occupancy = zero;
            first = all_teachers[k].teacher;
        }
        for (int l = all_teachers[k].ini; l < all_teachers[k].fi; ++l) {
            if (!occupancy[l][nday(all_teachers[k].day)]) {
                occupancy[l][nday(all_teachers[k].day)] = true;
                teacherOccupancy[l][nday(all_teachers[k].day)]++;
            } else {
                ++conflict;
            }
        }
    }

    print_sub(llist, hmin, hmax);
    print_tea(teacherOccupancy, hmin, hmax, conflict);

    return 0;
}