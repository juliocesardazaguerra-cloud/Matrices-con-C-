#include <iostream>
//19. Leer dos matrices 4x5 entera y determinar si sus contenidos son exactamente iguales.

using namespace std;

int main() {
    int matriz1[4][5];
    int matriz2[4][5];
    bool son_iguales = true;

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

    // 3. Comparar si sus contenidos son exactamente iguales
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz1[i][j] != matriz2[i][j]) {
                son_iguales = false;
                break; 
            }
        }
        if (!son_iguales) {
            break; 
        }
    }

    // 4. Mostrar el resultado
    cout << "\n--- RESULTADO ---" << endl;
    if (son_iguales) {
        cout << "Las dos matrices son exactamente iguales." << endl;
    } else {
        cout << "Las matrices NO son iguales." << endl;
    }

    return 0;
}
