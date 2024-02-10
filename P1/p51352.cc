#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    if (a == b){
        cout << "-" << endl;
    }
    else if (a == 'A'){
        if (b == 'P'){
            cout << "1" << endl;
    }
        else{
            cout << "2" << endl;
        }
    }
    else if (a == 'P'){
        if (b == 'V'){
            cout << "1" << endl;
    }
        else{
            cout << "2" << endl;
        }
    }
    else if (a == 'V'){
        if (b == 'A'){
            cout << "1" << endl;
    }
        else{
            cout << "2" << endl;
        }
    }



}