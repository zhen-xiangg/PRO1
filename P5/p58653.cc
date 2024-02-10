#include <iostream>
using namespace std;

void print_line(char c, string s, bool b) {
    int count = 0;
    bool leter = true;
    for (int i = 0; i < 6; ++i) {
        b = false;
        if (count == 0) {
            s = "letter";
            if ((int(c) >= int('a') and int(c) <= int('z')) or (int(c) >= int('A') and int(c) <= int('Z'))) {
                b = true;
            }
            else leter = false;
        }
        else if (count == 1) {
            s = "vowel";
            if (int(c) == int('a') or int(c) == int('e') or int(c) == int('i') or int(c) == int('o') or int(c) == int('u') or int(c) == int('A') or int(c) == int('E') or int(c) == int('I') or int(c) == int('O') or int(c) == int('U')) {
                b = true;
            }  
        }      
        else if (count == 2) {
            s = "consonant";
            if (leter and int(c) != int('a') and int(c) != int('e') and int(c) != int('i') and int(c) != int('o') and int(c) != int('u') and int(c) != int('A') and int(c) != int('E') and int(c) != int('I') and int(c) != int('O') and int(c) != int('U')) {
                b = true;
            }  
        }
        else if (count == 3) {
            s = "uppercase";
            if (int(c) >= int('A') and int(c) <= int('Z')) {
                b = true;
            }
        }
        else if (count == 4) {
            s = "lowercase";
            if (int(c) >= int('a') and int(c) <= int('z')) {
                b = true;
            }
        }
        else if (count == 5) {
            s = "digit";
            if (int(c) >= int('0') and int(c) <= int('9')) {
                b = true;
            }
        }
        cout << s << "('" << c << "') = ";
        if (b) cout << "true" << endl;
        else cout << "false" << endl;
        ++count;
    }
}

int main() {
    char c;
    string s = "";
    bool b = false;
    while (cin >> c) {
        print_line(c, s, b);
    }
}

