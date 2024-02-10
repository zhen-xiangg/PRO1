#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    while (b > a){
        cout << a << ",";
        a++;
    }
    if (a == b){
        cout << a << endl;
    }
}