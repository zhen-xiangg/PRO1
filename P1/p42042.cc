#include <iostream>
using namespace std;

int main(){
    char leter;
    cin >> leter;
    if (int(leter) >= int('a') and int(leter) <= int('z')) {
        cout << "lowercase" << endl;
    } 
    else {
    cout << "uppercase" << endl;
    }
    if (int(leter) == int('a') or int(leter) == int('e') or int(leter) == int('i') or int(leter) == int('o') or int(leter) == int('u') or int(leter) == int('A') or int(leter) == int('E') or int(leter) == int('I') or int(leter) == int('O') or int(leter) == int('U')){
        cout << "vowel" << endl;
    }
    else{
        cout << "consonant" << endl;
    }

}