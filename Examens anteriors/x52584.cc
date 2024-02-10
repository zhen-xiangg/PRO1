#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct Jugador{
    string nombre;
    int dtd;        // doble triple-doble
    int td;         // triple-doble (que no son doble triple-doble)
};

typedef vector<Jugador> Jugadores;
// Pre: p >= 0; en la entrada hay un nombre seguido de sus estadísticas en p partidos
// Post: jug está inicializado convenientemente con los datos de la entrada
void leer_jugador(int p, Jugador& jug) {
    int puntos, rebotes, asistencias, tapones, recuperaciones;
    for (int i = 0; i < p; ++i) {
        cin >> puntos >> rebotes >> asistencias >> tapones >> recuperaciones;
        if (asistencias >= 20 and tapones >= 20 and recuperaciones >= 20) ++jug.dtd;
        else if (rebotes >= 20 and tapones >= 20 and recuperaciones >= 20) ++jug.dtd;
        else if (rebotes >= 20 and asistencias >= 20 and recuperaciones >= 20) ++jug.dtd;
        else if (rebotes >= 20 and asistencias >= 20 and tapones >= 20) ++jug.dtd;
        else if (puntos >= 20 and tapones >= 20 and recuperaciones >= 20) ++jug.dtd;
        else if (puntos >= 20 and asistencias >= 20 and recuperaciones >= 20) ++jug.dtd;
        else if (puntos >= 20 and asistencias >= 20 and tapones >= 20) ++jug.dtd;
        else if (puntos >= 20 and rebotes >= 20 and recuperaciones >= 20) ++jug.dtd;
        else if (puntos >= 20 and rebotes >= 20 and tapones >= 20) ++jug.dtd;
        else if (puntos >= 20 and rebotes >= 20 and asistencias >= 20) ++jug.dtd;

        else if (asistencias >= 10 and tapones >= 10 and recuperaciones >= 10) ++jug.td;
        else if (rebotes >= 10 and tapones >= 10 and recuperaciones >= 10) ++jug.td;
        else if (rebotes >= 10 and asistencias >= 10 and recuperaciones >= 10) ++jug.td;
        else if (rebotes >= 10 and asistencias >= 10 and tapones >= 10) ++jug.td;
        else if (puntos >= 10 and tapones >= 10 and recuperaciones >= 10) ++jug.td;
        else if (puntos >= 10 and asistencias >= 10 and recuperaciones >= 10) ++jug.td;
        else if (puntos >= 10 and asistencias >= 10 and tapones >= 10) ++jug.td;
        else if (puntos >= 10 and rebotes >= 10 and recuperaciones >= 10) ++jug.td;
        else if (puntos >= 10 and rebotes >= 10 and tapones >= 10) ++jug.td;
        else if (puntos >= 10 and rebotes >= 10 and asistencias >= 10) ++jug.td;
    }
}


bool ordena(const Jugador &a, const Jugador &b) {
    if (a.dtd != b.dtd) return a.dtd > b.dtd;
    else if (a.td != b.td) return a.td > b.td;
    else return a.nombre < b.nombre;
}

int main() {
    int p, n;
    while (cin >> p) {
        cin >> n; 
        if (n > 0) {
            Jugadores j(n);
            for (int i = 0; i < n; ++i) {
                cin >> j[i].nombre;
                j[i].dtd = 0;
                j[i].td = 0;
                leer_jugador(p, j[i]);
            }
            sort(j.begin(), j.end(), ordena);
            for (int l = 0; l < n; ++l) {
                cout << j[l].nombre << " " << j[l].dtd << " " << j[l].td << endl;
            }
        }
    }
}
