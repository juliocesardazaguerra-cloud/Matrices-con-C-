#include <iostream>
//21. Leer dos matrices 4x5 enteras y determinar cuántos datos tienen en común.
using namespace std;

int main() {
    int matriz1[4][5];
    int matriz2[4][5];
    int datos_en_comun = 0;

    // 1. Leer la primera matriz 4x5
    cout << "--- INGRESE LOS DATOS DE LA PRIMERA MATRIZ (4x5) ---" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Matriz 1 - Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz1[i][j];
        }
    }

    // 2. Leer la segunda matriz 4x5
    cout << "\n--- INGRESE LOS DATOS DE LA SEGUNDA MATRIZ (4x5) ---" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Matriz 2 - Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz2[i][j];
        }
    }

    // 3. Determinar cuántos datos tienen en común
    // Comparamos posición por posición (en la misma casilla)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz1[i][j] == matriz2[i][j]) {
                datos_en_comun++;
            }
        }
    }

    // 4. Mostrar el resultado
    cout << "\n--- RESULTADO ---" << endl;
    cout << "Cantidad de datos en comun (en la misma posicion): " << datos_en_comun << endl;

    return 0;
}
