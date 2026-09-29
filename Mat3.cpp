#include <iostream>
//3. Leer una matriz 3x4 entera y determinar en qué posiciones exactas se encuentran los números pares
using namespace std;
int main() {
    // 1. Declarar la matriz de 3 filas y 4 columnas
    int matriz[3][4];
    // 2. Leer los 12 números ingresados por el usuario
    cout << "Por favor, ingresa los numeros para la matriz 3x4:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }
    // 3. Recorrer la matriz y mostrar las posiciones de los números pares
    cout << "\n--------------------------------------------------\n";
    cout << "Posiciones de los numeros pares encontrados:\n";
    cout << "--------------------------------------------------\n";
    bool encontroPares = false; // Variable para saber si encontramos al menos uno
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            // Un número es par si el residuo de dividirlo entre 2 es cero (%)
            if (matriz[i][j] % 2 == 0) {
                cout << "El numero " << matriz[i][j] 
                     << " esta en la Fila: " << i + 1 
                     << ", Columna: " << j + 1 << endl;
                encontroPares = true;
            }
        }
    }
    // Si no se encontró ningún número par, se le avisa al usuario
    if (!encontroPares) {
        cout << "No se encontraron numeros pares en la matriz.\n";
    }
    cout << "--------------------------------------------------\n";
    return 0;
}
