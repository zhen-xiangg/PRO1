#include <iostream>

using namespace std;

int main() {
    char leter;
    cin >> leter;
    if (int(leter) >= int('a') and int(leter) <= int('z')) {
        cout << char(int(leter) - int('a') + int('A')) << endl;
    } 
    else {
        cout << char(int(leter) + int('a') - int('A')) << endl;
    }
}
