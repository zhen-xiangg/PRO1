#include <iostream>
#include <cmath>
using namespace std;

bool primer (int n) {
    int count = 2;
    bool primer = true;
    while (count <= sqrt(n)) {
        if (n % count == 0) primer = false;
    ++count;
    }
    if (!primer or n == 1 or n ==0) primer = false;
    return primer;
}

int next_primer(int n) {
    bool primer = false;
    while (!primer) {
        n += 1;
        int count = 2;
        primer = true;
        while (primer and count <= sqrt(n)) {
            if (n % count == 0) primer = false;
        ++count;
        }
    }
    return n;
}

int main () {
    int n;
    while (cin >> n and primer(n)) {
        cout << next_primer(n) << endl;
    }
}