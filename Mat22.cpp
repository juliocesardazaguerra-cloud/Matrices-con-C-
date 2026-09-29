#include <iostream>
//22. Leer dos matrices 4x5 enteras y determinar si el número mayor almacenado en la primera está en la segunda.
using namespace std;

int main() {
    int matriz1[4][5];
    int matriz2[4][5];
    int mayor_matriz1;
    bool encontrado = false;

    // 1. Leer la primera matriz 4x5
    cout << "--- INGRESE LOS DATOS DE LA PRIMERA MATRIZ (4x5) ---" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Matriz 1 - Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz1[i][j];
            
            // Si es el primer elemento que leemos, lo asignamos como el mayor
            if (i == 0 && j == 0) {
                mayor_matriz1 = matriz1[i][j];
            } else if (matriz1[i][j] > mayor_matriz1) {
                // Si encontramos un número más grande, actualizamos el mayor
                mayor_matriz1 = matriz1[i][j];
            }
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

    // 3. Buscar si el mayor de la primera matriz está en cualquier parte de la segunda
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz2[i][j] == mayor_matriz1) {
                encontrado = true;
                break; // Rompe el ciclo de las columnas
            }
        }
        if (encontrado) {
            break; // Rompe el ciclo de las filas si ya lo encontramos
        }
    }

    // 4. Mostrar el resultado
    cout << "\n--- RESULTADO ---" << endl;
    cout << "El numero mayor de la primera matriz es: " << mayor_matriz1 << endl;
    if (encontrado) {
        cout << "SI, este numero tambien se encuentra en la segunda matriz." << endl;
    } else {
        cout << "NO, este numero no existe en la segunda matriz." << endl;
    }

    return 0;
}
