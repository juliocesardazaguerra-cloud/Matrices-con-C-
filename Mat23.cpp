#include <iostream>
//23. Leer dos matrices 4x5 enteras y determinar si el número mayor de una de las matrices es igual al número mayor de la otra matriz.
using namespace std;

int main() {
    int matriz1[4][5];
    int matriz2[4][5];
    int mayor_matriz1;
    int mayor_matriz2;

    // 1. Leer la primera matriz 4x5 y encontrar su mayor número
    cout << "--- INGRESE LOS DATOS DE LA PRIMERA MATRIZ (4x5) ---" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Matriz 1 - Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz1[i][j];
            
            // Inicializar o buscar el mayor de la matriz 1
            if (i == 0 && j == 0) {
                mayor_matriz1 = matriz1[i][j];
            } else if (matriz1[i][j] > mayor_matriz1) {
                mayor_matriz1 = matriz1[i][j];
            }
        }
    }

    // 2. Leer la segunda matriz 4x5 y encontrar su mayor número
    cout << "\n--- INGRESE LOS DATOS DE LA SEGUNDA MATRIZ (4x5) ---" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Matriz 2 - Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz2[i][j];
            
            // Inicializar o buscar el mayor de la matriz 2
            if (i == 0 && j == 0) {
                mayor_matriz2 = matriz2[i][j];
            } else if (matriz2[i][j] > mayor_matriz2) {
                mayor_matriz2 = matriz2[i][j];
            }
        }
    }

    // 3. Comparar los dos números mayores y mostrar el resultado
    cout << "\n--- RESULTADO ---" << endl;
    cout << "El mayor numero de la primera matriz es: " << mayor_matriz1 << endl;
    cout << "El mayor numero de la segunda matriz es: " << mayor_matriz2 << endl;

    if (mayor_matriz1 == mayor_matriz2) {
        cout << "SI, los numeros mayores de ambas matrices son iguales." << endl;
    } else {
        cout << "NO, los numeros mayores de las matrices son diferentes." << endl;
    }

    return 0;
}
