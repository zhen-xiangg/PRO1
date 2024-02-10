#include <iostream> 
#include <vector>

using namespace std;

int points(const vector<string> &g) {
    int n = g.size(), result = 0;
    for (int i = 1; i < n; ++i) {        
        if (g[i] != g[i - 1] and g[i] != "multicolor" and g[i - 1] != "multicolor") {
            ++result;
        }
        else if (g[i] != "multicolor" and g[i - 1] == "multicolor") {
            bool found = false;
            int num = 2;
            while (!found) {
                if (i - num >= 0 and g[i - num] != "multicolor") {
                    found = true;
                    if (g[i - num] != g[i]) ++result;
                }
                else if (i - num >= 0 and g[i - num] == "multicolor") ++num;
                else found = true;
            }
        }
    }
    return result;
}

int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; ++i) {
            string s;
            vector<string> game(0);
            while (cin >> s and s != "end") {
                game.push_back(s);
            }
            cout << points(game) << endl;
        }
    }
}