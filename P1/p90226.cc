#include <iostream>

using namespace std;

int main() {
    string name1, name2;
    cin >> name1 >> name2;
    if (name1 > name2){
        cout << name1 << " > " << name2 << endl;
    }
    else if (name1 < name2){
        cout << name1 << " < " << name2 << endl;
    }
    else {
        cout << name1 << " = " << name2 << endl;
    }
}