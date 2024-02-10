#include <iostream>
using namespace std;

int main() {
    int element, a, b, first= 0, pass = 0;
    bool wina = false, winb = false;
    cin >> element;
    int count = 1; 
    for (int k = 0; k < element ; ++k) {
        cin >> a >> b; 
        if (!wina and !winb) {
            int original_a = a;
            int position;
            if (pass == 0) {
                while (a>9) {
                    ++count;
                    a /= 10;
                }
                if (count%2 == 0) winb = true;
                position = count/2;
                a = original_a;
                for (int i = 0; i < position; ++ i) {
                    a /= 10;
                }
                first = a%10;
            }
            else if (pass != 0) {
                count = 1;  
                while (a>9) {
                    ++count;
                    a /= 10;
                }
                if (count%2 == 0) winb = true;
                else {
                    position = count/2;
                    a = original_a;
                    for (int i = 0; i < position; ++ i) {
                        a /= 10;
                    }
                    if (a%10 != first) winb = true;                    } 
            }
            if (!winb) {
                int original_b = b;
                count = 1;  
                while (b>9) {
                    ++count;
                    b /= 10;
                }
                if (count%2 == 0) wina = true;
                else if (count%2 != 0) {
                    position = count/2;
                    b = original_b;
                    for (int i = 0; i < position; ++ i) {
                        b /= 10;
                    }
                    if (b%10 != first) wina = true;
                }
                ++pass;
            }
        }
    }
    if (wina) cout << "A" << endl; 
    else if (winb) cout << "B" << endl; 
    else cout << "=" << endl; 
}