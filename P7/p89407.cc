#include <iostream>
#include <vector>
using namespace std;

bool mateixos_digits(int x, int y, int b){
	vector<int> v(b,0);
	int n = v.size();
	int xy= x*y;
	while(xy!=0){
		if (x!=0)++v[x%b];
		if (y!=0)++v[y%b];
		--v[xy%b];
		x/=b;
		y/=b;
		xy/=b;
	}
	for (int i = 0; i < n; ++i){
		if(v[i]!=0) return false;
	}
	return true;
}
    
void escriu(int n, int b){
	int result;
    if (n < b) {
        if (n > 9) {
            cout << char(int('A') + (n-10));
        }       
        else cout << n;
    }
    else {
        escriu(n/b, b);
        result = n%b;
        if (result > 9) {
            cout << char(int('A') + (result-10));
        }       
        else cout << result;
    }
}

int main() {
	int x, y;
	while (cin >> x >> y){
		int base = 2;
		bool trobat = false;
		cout << "solucions per a " << x << " i " << y << endl;
		while(base <= 16){
			bool resultat = mateixos_digits(x, y, base);
			if (resultat) {
				escriu(x, base);
				cout << " * ";
				escriu(y, base);
				cout << " = ";
				int nxy = x*y;
				escriu(nxy, base);
				cout << " (base " << base << ')' << endl;
				trobat = true;
			}
			++base;
		}
		if (!trobat) {
			cout << "cap" << endl;
		}
		cout << endl;
	}
}

