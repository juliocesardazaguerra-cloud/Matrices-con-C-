#include <iostream>
//33. Leer una matriz 4x6 entera y determinar en qué posiciones están los menores pares por fila.
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

    // 2. Determinar las posiciones de los menores pares por cada fila
    cout << "\n--- RESULTADOS: POSICIONES DE LOS MENORES PARES POR FILA ---" << endl;
    
    for (int i = 0; i < 4; i++) {
        int menor_par;
        bool tiene_par = false;
        
        // Primero encontramos cuál es el valor par más bajo de esta fila
        for (int j = 0; j < 6; j++) {
            if (matriz[i][j] % 2 == 0) { // Si el número es par
                if (!tiene_par || matriz[i][j] < menor_par) {
                    menor_par = matriz[i][j];
                    tiene_par = true;
                }
            }
        }

        // Luego imprimimos los resultados para la fila actual
        cout << "Fila " << i + 1 << ": ";
        if (tiene_par) {
            cout << "El numero par menor es (" << menor_par << ") y esta en: ";
            for (int j = 0; j < 6; j++) {
                if (matriz[i][j] == menor_par) {
                    cout << "[Columna " << j + 1 << "] ";
                }
            }
            cout << endl;
        } else {
            cout << "No contiene numeros pares en esta fila." << endl;
        }
    }

    return 0;
}
