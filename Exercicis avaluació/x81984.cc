#include <iostream>
using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    if ((a+b)/2.0 == double(c)) cout << "YES" << endl;
    else if ((c+b)/2.0 == double(a)) cout << "YES" << endl;
    else if ((a+c)/2.0 == double(b)) cout << "YES" << endl;
    else cout << "NO" << endl;
} 
