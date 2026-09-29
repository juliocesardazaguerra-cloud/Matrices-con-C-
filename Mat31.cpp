#include <iostream>
//31. Leer una matriz 4x6 entera y determinar en qué posiciones están los menores por fila.
using namespace std;

int main() {
    int matriz[4][6];

    // 1. Leer la matriz 4x6
    cout << "--- INGRESE LOS DATOS DE LA MATRIZ (4x6) ---" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            cout << "Fila " << i + 1 << ", Columna " << j + 1 << ": ";
            cin >> matriz[i][j];
        }
    }

    // 2. Determinar las posiciones de los menores por cada fila
    cout << "\n--- RESULTADOS: POSICIONES DE LOS MENORES POR FILA ---" << endl;
    
    // Recorremos fila por fila
    for (int i = 0; i < 4; i++) {
        // Asumimos que el primer elemento de la fila actual es el menor
        int menor_fila = matriz[i][0];
        
        // Primero encontramos cuál es el valor más bajo de esta fila
        for (int j = 1; j < 6; j++) {
            if (matriz[i][j] < menor_fila) {
                menor_fila = matriz[i][j];
            }
        }

        // Luego imprimimos todas las columnas donde se encuentra ese valor menor
        // (Por si el número menor está repetido en la misma fila)
        cout << "En la Fila " << i + 1 << " el numero menor es (" << menor_fila << ") y esta en: ";
        for (int j = 0; j < 6; j++) {
            if (matriz[i][j] == menor_fila) {
                cout << "[Columna " << j + 1 << "] ";
            }
        }
        cout << endl;
    }

    return 0;
}
