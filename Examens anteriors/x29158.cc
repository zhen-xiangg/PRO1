#include <iostream> 
using namespace std;

int main () {
    char character;
    int sum = 0;
    while (cin >> character and character != '.') {
        int operation = 0;
        if ('A' <= character and character <= 'Z'){
            operation = int(character) - int('A') + 1;
        }
        else if ('a' <= character and character <= 'z'){
            operation = int(character) - int('z') - 1;
        }
        sum += operation;
    }
    cout << sum << endl;
}