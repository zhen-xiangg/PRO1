#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x > y){
        while (x >= y){
            cout << x << endl;
            x -=1;
        }
    }
    else{
        while (y >= x){
            cout << y << endl;
            y -=1;
        }
    }
}