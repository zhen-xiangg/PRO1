#include <iostream>
using namespace std;

int main() {
    int a1, a2, a3;
    int b1, b2, b3;
    string result;
    cin >> a1 >> b1 >> a2 >> b2;
    if (a1 > a2) {
        a3 = a1;
    } 
    else {
        a3 = a2;
    }
    if (b1 > b2) {
        b3 = b2;
    } 
    else {
        b3 = b1;
    }
    if (a3 > b3) {
        result = "?";
        cout << result << " , "
        << "[]" << endl;
    } 
    else {
        if (a2 == a1 and b2 == b1) {
            result = "=";
        } 
        else if (a2 <= a1 and b2 >= b1) {
            result = "1";
        } 
        else if (a2 >= a1 and b2 <= b1) {
            result = "2";
        } 
        else {
        result = "?";
        }
        cout << result << " , "
        << "[" << a3 << "," << b3 << "]" << endl;
    }
}
