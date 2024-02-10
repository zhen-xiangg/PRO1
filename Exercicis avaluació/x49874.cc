#include <iostream>
using namespace std;

int main() {
    char character, character_1 = 'O', character_2 = 'O' , character_3 = 'O', character_4 = 'O', result = 'O';
    int count = -1;
    bool found = false;
    while (cin >> character and !found) {
        ++count; 
        if (character == character_1) {
            found = true;
            result = character_1;
        }
        if (character == character_2) {
            found = true;
            result = character_2;
        }
        if (character == character_3) {
            found = true;
            result = character_3;
        }
        if (character == character_4) {
            found = true;
            result = character_4;
        }
        if (character == 'a') character_1 = 'a';
        if (character == 'b') character_2 = 'b';
        if (character == 'c') character_3 = 'c';
        if (character == 'd') character_4 = 'd';
    }
    cout << result << " " << count << endl;
}