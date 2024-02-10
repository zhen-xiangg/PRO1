#include <iostream>
using namespace std;

int main () {
    char character, character_1 = '0', character_2 = 'O' , character_3 = 'O';
    string result = "0";
    int count = -3;
    bool found = false, aaafound = false, aabfound = false, abafound = false, abbfound = false, baafound = false, babfound = false, bbafound = false, bbbfound = false;
    while (cin >> character and !found) {
        ++count; 
        character_3 = character_2;
        character_2 = character_1;
        character_1 = character;
        if (aaafound and character_3 == 'a' and character_2 == 'a' and character_1 == 'a') {
            result = "aaa";
            found = true;
        }
        if (aabfound and character_3 == 'a' and character_2 == 'a' and character_1 == 'b') {
            result = "aab";
            found = true;
        }
        if (abafound and character_3 == 'a' and character_2 == 'b' and character_1 == 'a') {
            result = "aba";
            found = true;
        }
        if (abbfound and character_3 == 'a' and character_2 == 'b' and character_1 == 'b') {
            result = "abb";
            found = true;
        }
        if (baafound and character_3 == 'b' and character_2 == 'a' and character_1 == 'a') {
            result = "baa";
            found = true;
        }
        if (babfound and character_3 == 'b' and character_2 == 'a' and character_1 == 'b') {
            result = "bab";
            found = true;
        }
        if (bbafound and character_3 == 'b' and character_2 == 'b' and character_1 == 'a') {
            result = "bba";
            found = true;
        }
        if (bbbfound and character_3 == 'b' and character_2 == 'b' and character_1 == 'b') {
            result = "bbb";
            found = true;
        }
        if (character_3 == 'a') {
            if (character_2 == 'a') {
                if (character_1 == 'a') aaafound = true;
                if (character_1 == 'b') aabfound = true;
            }
            if (character_2 == 'b') {
                if (character_1 == 'a') abafound = true;
                if (character_1 == 'b') abbfound = true;
            }
        }
        if (character_3 == 'b') {
            if (character_2 == 'a') {
                if (character_1 == 'a') baafound = true;
                if (character_1 == 'b') babfound = true;
            }
            if (character_2 == 'b') {
                if (character_1 == 'a') bbafound = true;
                if (character_1 == 'b') bbbfound = true;
            }
        }
    }
    cout << result << " " << count << endl;
}