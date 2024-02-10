#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Programador {
    string nombre;
    int nivel;
};

typedef vector<string> Equipo;
typedef vector<Programador> Programadores;

void agrupar(Programadores& nacionalidad_1, Programadores& nacionalidad_2, int n1, int n2, int k) {
    Equipo grupo(k);
    int a = 0;
    int b = 0;
    int contador_nacionalidad_1 = 0;
    int contador_nacionalidad_2 = 0;

    for (int l = 0; l < n1 + n2; ++l) {
        //Hace los grupos
        int c = l%k;
        if(b == n2) {
            grupo[c] = nacionalidad_1[a].nombre;
                ++contador_nacionalidad_1;
                ++a;
            }
        else if(a == n1) {
            grupo[c]= nacionalidad_2[b].nombre;
            ++contador_nacionalidad_2;
            ++b;
        }
        else if(nacionalidad_1[a].nivel > nacionalidad_2[b].nivel) {
            grupo[c] = nacionalidad_1[a].nombre;
            ++contador_nacionalidad_1;
            ++a;
        }
        else if(nacionalidad_1[a].nivel < nacionalidad_2[b].nivel) {
            grupo[c] = nacionalidad_2[b].nombre;
            ++contador_nacionalidad_2;
            ++b;
        }
        else if((nacionalidad_1[a].nivel == nacionalidad_2[b].nivel)) {
            if(contador_nacionalidad_1 < contador_nacionalidad_2) {
                grupo[c]= nacionalidad_1[a].nombre;
                ++contador_nacionalidad_1;
                ++a;
            }
            else if(contador_nacionalidad_1 > contador_nacionalidad_2) {
                grupo[c] = nacionalidad_2[b].nombre;
                ++contador_nacionalidad_2;
                ++b;
            }
            else{
                if(nacionalidad_1[a].nombre > nacionalidad_2[b].nombre) {
                    grupo[c] = nacionalidad_2[b].nombre;
                    ++contador_nacionalidad_2;
                    ++b;
                }
                else{
                    grupo[c] = nacionalidad_1[a].nombre;
                    ++contador_nacionalidad_1;
                    ++a;
                }
            }
        }

        if ((l + 1) % k == 0) {
            sort(grupo.begin(), grupo.end()); //Lo ordena alfabeticamente

            for (int z = 0; z < k; ++z) { //Lo saca por pantalla;
                cout << grupo[z];
                if (z != k - 1) cout << ' ';
            }
            cout << endl;
            fill(grupo.begin(), grupo.end(), "");  // Llenar con cadenas vacías en lugar de 0
            contador_nacionalidad_1 = 0;
            contador_nacionalidad_2 = 0;
        }
    }
    cout << endl;
}

int main() {
    int k;
    while (cin >> k) {
        int n1, n2;
        cin >> n1;
        Programadores rusos(n1);
        for (int i = 0; i < n1; ++i) {
            cin >> rusos[i].nombre >> rusos[i].nivel;
        }

        cin >> n2;
        Programadores estadounidenses(n2);
        for (int i = 0; i < n2; ++i) {
            cin >> estadounidenses[i].nombre >> estadounidenses[i].nivel;
        }

        agrupar(rusos, estadounidenses, n1, n2, k);
    }
}