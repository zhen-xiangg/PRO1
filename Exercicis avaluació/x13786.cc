#include <iostream>
using namespace std;

int main() {
    string a, b, c, name, e, f, g, i, j;
    int years;
    while (cin >> a >> b >> c >> name >> e >> f >> g >> years >> i >> g){
        int difference = years/10;
        cout << name << ", you look younger. I thought you were " << years - difference << " years old." << endl;  
    }
}