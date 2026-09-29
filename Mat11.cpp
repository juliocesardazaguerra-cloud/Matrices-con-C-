#include <iostream>
//11. Leer una matriz 5x5 entera y determinar en qué columna está el menor número par.
using namespace std;
int main() {
    // 1. Declarar la matriz de 5 filas y 3 columnas
    int matriz[5][3];

    // 2. Leer los 15 números ingresados por el usuario
    cout << "Por favor, ingresa los numeros para la matriz 5x3:\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Variables para rastrear el menor par y su ubicación
    int menorPar; 
    int columnaMenorPar = -1; // Usamos -1 para saber si encontramos al menos un par
    bool primerParEncontrado = false;

    // 3. Recorrer la matriz para buscar el menor de los números pares
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            // Verificar si el número actual es par
            if (matriz[i][j] % 2 == 0) {
                // Si es el primer par que vemos, lo tomamos como el menor de momento
                if (!primerParEncontrado) {
                    menorPar = matriz[i][j];
                    columnaMenorPar = j;
                    primerParEncontrado = true;
                } 
                // Si ya teníamos un menor par, comparamos para ver si el actual es más pequeño
                else if (matriz[i][j] < menorPar) {
                    menorPar = matriz[i][j];
                    columnaMenorPar = j;
                }
            }
        }
    }

    // 4. Mostrar el resultado final
    cout << "\n--------------------------------------------------\n";
    if (primerParEncontrado) {
        cout << "El menor numero par encontrado es: " << menorPar << endl;
        // Sumamos 1 al índice de la columna para que se cuente de la 1 a la 3
        cout << "Se encuentra en la Columna: " << columnaMenorPar + 1 << endl;
    } else {
        cout << "No se ingreso ningun numero par en la matriz.\n";
    }
    cout << "--------------------------------------------------\n";

    return 0;
}
