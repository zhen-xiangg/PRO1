#include <iostream>
#include <vector>
using namespace  std;


typedef vector<char> Binario;
typedef vector<Binario> Matriz;

// Pre: n > 0, m > 0
// Post: retorna una matriz de '0' y '1' con dimensiones n*m leída de la entrada
Matriz leer_matriz(int n, int m) {
    Matriz my_matrix(n, Binario(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> my_matrix[i][j];
        }
    }
    return my_matrix;
}

// Pre: -
// Post: escribe el string s, seguido por dos punts, seguido por el Binario b
void escribir(string s, const Binario& b) {
    cout << s << ":";
    for (int i = 0; i < b.size(); ++i) cout << " " << b[i];
    cout << endl;
}

// Pre: gamma.size() = epsilon.size()
// Post: retorna el consumo calculado como gamma*epsilon en decimal
int calcula_consumo(const Binario& gamma, const Binario& epsilon) {
    int n = gamma.size(), g = 0, e = 0;;
    for (int i = 0; i < n; ++i) {
        if (gamma[i] != '0') {
            int r = n - i - 1;
            if (r == 0) g += 1;
            else {
                int m = 1;
                for (int j = 0; j < r; ++j) {
                    m *= 2;
                }
                g += m;
            }
        }
        if (epsilon[i] != '0') {
            int r = n - i - 1;
            if (r == 0) e += 1;
            else {
                int m = 1;
                for (int j = 0; j < r; ++j) {
                    m *= 2;
                }
                e += m;
            }
        }
    }
    int consumo = g*e;
    return consumo;
}

// Pre: mat.size > 0; 0 <= j < mat[0].size()
// Post: retorna el bit más frecuente en la columna j de mat. En caso de empate retorna '0'.
char bit_mas_comun(const Matriz& mat, int j) {
    int n = mat.size(), count_1 = 0, count_0 = 0;
    for (int i = 0; i < n; ++i) {
        if (mat[i][j] == '1') ++count_1;
        else ++count_0;
    }
    if (count_1 > count_0) return '1';
    else return '0';
}

// Pre: mat.size > 0; gamma.size() == mat[0].size(); epsilon.size() == mat[0].size()
// Post: gamma y epsilon son el ratio gamma y epsilon de mat, respectivamente
void calcula_ratios(const Matriz& mat, Binario& gamma, Binario& epsilon) {
    int m = mat[0].size();
    for (int j = 0; j < m; ++j) {
        char c = bit_mas_comun(mat, j);
        gamma[j] = c;
        if (c == '1') epsilon[j] = '0';
        else epsilon[j] = '1';
    }
}

int main() {
 int n, m;
    while (cin >> n >> m) {
        Matriz mat = leer_matriz(n, m);
        Binario gamma(m);
        Binario epsilon(m);
        calcula_ratios(mat, gamma, epsilon);
        escribir("Gamma", gamma);
        escribir("Epsilon", epsilon); 
        cout << "Consumo: " << calcula_consumo(gamma, epsilon) << endl << endl;
    }
}