#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Info {
    string country_name;
    double gini;
};


//pre: quintile_data represents a country income by quintile info
//post: returns the gini coef corresponding to quintile_data   
double gini_coef(const vector<double>& quintile_data) {
    int n = quintile_data.size();
    double result = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 1; j < n; ++j) {
            if (j > i) {
                result += quintile_data[j] - quintile_data[i];
            }
        }
    }
    return result/500;
}

bool ordena(const Info &a, const Info &b) {
    if (a.gini != b.gini) return a.gini < b.gini;
    else return a.country_name < b.country_name;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    int n;
    while (cin >> n) {
        vector<Info> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i].country_name;
            vector<double> num(5);
            for (int j = 0; j < 5; ++j) {
                cin >> num[j];
            }
            p[i].gini = gini_coef(num);
        }
        sort(p.begin(), p.end(), ordena);
        for (int h = 0; h < n; ++h) {
            cout << p[h].country_name << " " << p[h].gini << endl;
        }
    }
}