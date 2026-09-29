#include <iostream>
//37. Leer dos matrices 4x6 enteras y determinar si el número mayor de una matriz 
//se encuentra en la misma posición exacta en la otra matriz.
using namespace std;

int main() {
    int matriz1[4][6];
    int matriz2[4][6];
    int mayor_matriz1;
    int fila_mayor1 = 0, col_mayor1 = 0;

    // 1. Leer la primera matriz 4x6 y encontrar su número mayor
    cout << "--- INGRESE LOS DATOS DE LA PRIMERA MATRIZ (4x6) ---" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            cout << "Matriz 1 - Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz1[i][j];
            
            // Inicializar o buscar el mayor de la matriz 1 y guardar su ubicación
            if (i == 0 && j == 0) {
                mayor_matriz1 = matriz1[i][j];
                fila_mayor1 = i;
                col_mayor1 = j;
            } else if (matriz1[i][j] > mayor_matriz1) {
                mayor_matriz1 = matriz1[i][j];
                fila_mayor1 = i;
                col_mayor1 = j;
            }
        }
    }

    // 2. Leer la segunda matriz 4x6
    cout << "\n--- INGRESE LOS DATOS DE LA SEGUNDA MATRIZ (4x6) ---" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            cout << "Matriz 2 - Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz2[i][j];
        }
    }

    // 3. Verificar si en esa misma posición exacta de la segunda matriz está el mismo número
    cout << "\n--- RESULTADO ---" << endl;
    cout << "El numero mayor de la primera matriz es " << mayor_matriz1 
         << " en la posicion [" << fila_mayor1 + 1 << "][" << col_mayor1 + 1 << "]." << endl;

    if (matriz2[fila_mayor1][col_mayor1] == mayor_matriz1) {
        cout << "SI, el numero en la misma posicion exacta de la segunda matriz tambien es " << mayor_matriz1 << "." << endl;
    } else {
        cout << "NO, el numero en esa posicion en la segunda matriz es " << matriz2[fila_mayor1][col_mayor1] << "." << endl;
    }

    return 0;
}
