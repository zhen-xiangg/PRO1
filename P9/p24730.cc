#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Profe {
    string nom;
    int caramels;
    int pastanagues;
};

bool abans(const Profe &a, const Profe &b) {
    if (a.caramels != b.caramels) return a.caramels > b.caramels;
    else if (a.pastanagues != b.pastanagues) return a.pastanagues > b.pastanagues;
    else if (a.nom.size() != b.nom.size()) return a.nom.size() < b.nom.size();
    else return a.nom < b.nom;
}

int main() {
    int n;
    while (cin >> n) {
        for (int j = 0; j < n; ++j) {
            int nprof;
            cin >> nprof;
            vector<Profe> profes(nprof);
            for (int i = 0; i < nprof; ++i) {
                cin >> profes[i].nom >> profes[i].caramels >> profes[i].pastanagues;
            }
            sort(profes.begin(), profes.end(), abans);
            for (int i = 0; i < nprof; ++i) {
                cout << profes[i].nom << endl;
            }
            cout << endl;
        }
    }
}