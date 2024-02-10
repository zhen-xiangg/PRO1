#include <iostream>
#include <vector> 
using namespace std;

int positionDistance1(const vector<int> &v) {
	int n = v.size();
	int lo = 0, hi = n-1;
	while (lo < hi) {
		int mid = (lo + hi + 1) / 2;
		if (v[mid] % 2 == v[0] % 2) {
			lo = mid;
		}
		else {
			hi = mid - 1;
		}
	}
	return lo;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << positionDistance1(a) << endl;
    }
}