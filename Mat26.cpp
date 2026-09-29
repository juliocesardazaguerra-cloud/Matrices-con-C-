#include <iostream>
//26. Leer dos matrices 4x5 enteras y determinar si la cantidad de números pares almacenados
// en una matriz es igual a la cantidad de números pares almacenados en la otra matriz.
using namespace std;

int main() {
    int matriz1[4][5];
    int matriz2[4][4]; // Matriz de 4x4 según la corrección del enunciado real
    int pares_matriz1 = 0;
    int pares_matriz2 = 0;

    // 1. Leer la primera matriz 4x5 y contar sus números pares
    cout << "--- INGRESE LOS DATOS DE LA PRIMERA MATRIZ (4x5) ---" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Matriz 1 - Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz1[i][j];
            
            // Si el residuo de dividir entre 2 es cero, el número es par
            if (matriz1[i][j] % 2 == 0) {
                pares_matriz1++;
            }
        }
    }

    // 2. Leer la segunda matriz 4x4 y contar sus números pares
    cout << "\n--- INGRESE LOS DATOS DE LA SEGUNDA MATRIZ (4x4) ---" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Matriz 2 - Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz2[i][j];
            
            // Si el residuo de dividir entre 2 es cero, el número es par
            if (matriz2[i][j] % 2 == 0) {
                pares_matriz2++;
            }
        }
    }

    // 3. Comparar las cantidades y mostrar el resultado
    cout << "\n--- RESULTADO ---" << endl;
    cout << "Cantidad de pares en la Matriz 1: " << pares_matriz1 << endl;
    cout << "Cantidad de pares en la Matriz 2: " << pares_matriz2 << endl;

    if (pares_matriz1 == pares_matriz2) {
        cout << "SI, ambas matrices tienen la misma cantidad de numeros pares." << endl;
    } else {
        cout << "NO, las matrices tienen una cantidad diferente de numeros pares." << endl;
    }

    return 0;
}
