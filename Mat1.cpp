#include <iostream>
//1. Leer una matriz 4x4 entera y determinar en qué fila y en qué columna se encuentra el número mayor.
using namespace std;
int main() {
    // 1. Declarar la matriz de 4x4 y las variables para rastrear el mayor
    int matriz[4][4];
    int filaMayor = 0;
    int columnaMayor = 0;
    // 2. Leer los datos de la matriz ingresados por el usuario
    cout << "Por favor, ingresa los numeros para la matriz 4x4:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }
    // 3. Asumir que el primer elemento es el mayor al principio
    int numeroMayor = matriz[0][0];
    // 4. Recorrer la matriz para encontrar el número más grande
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > numeroMayor) {
                numeroMayor = matriz[i][j];
                filaMayor = i;      // Guarda la fila actual
                columnaMayor = j;   // Guarda la columna actual
            }
        }
    }
    // 5. Mostrar los resultados (sumamos 1 a los índices para que sea fácil de leer)
    cout << "\n--------------------------------------------------\n";
    cout << "El numero mayor encontrado es: " << numeroMayor << endl;
    cout << "Se encuentra en la Fila: " << filaMayor + 1 << ", Columna: " << columnaMayor + 1 << endl;
    cout << "--------------------------------------------------\n";
    return 0;
}
