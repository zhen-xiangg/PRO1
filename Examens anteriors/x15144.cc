#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Article {
    string identifier;
    string topic;
    int freq;
};


//pre: n > 0
//post: returns article vector formed by input channel data
vector<Article> initialize_art_vector(int n) {
    vector<Article> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].identifier >> a[i].topic;
        a[i].freq = 0;
    }
    return a;
}

int buscar_pos(const vector<Article>& v, string& s, int izq, int der){
    int m = (izq + der)/2;    
    if (v[m].identifier < s) return buscar_pos(v, s, m+1, der);
    else if (v[m].identifier > s) return buscar_pos(v, s, izq, m-1);
    return m;
}

bool ordena(const Article &a, const Article &b) {
    if (a.topic != b.topic) return a.topic < b.topic;
    else if (a.freq != b.freq) return a.freq > b.freq;
    else return a.identifier < b.identifier;
}

//pre: v is non-empty
//post: write vector on output
void write_art_vector(vector<Article> &v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        cout << v[i]. topic << " " << v[i].freq << " " << v[i].identifier << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<Article> v = initialize_art_vector(n);
    string s; 
    while (cin >> s){
        int p = buscar_pos(v, s, 0, n-1);
        ++v[p].freq;

    }
    sort(v.begin(), v.end(), ordena);
    write_art_vector(v);
}