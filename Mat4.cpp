#include <iostream>
//5.Leer una matriz 4x3 entera, calcular la suma de los elementos de cada fila y determinar cuál es la fila que tiene la mayor suma
using namespace std;
int main() {
    // 1. Declarar la matriz de 4 filas y 3 columnas
    int matriz[4][3];
    // 2. Leer los 12 números ingresados por el usuario
    cout << "Por favor, ingresa los numeros para la matriz 4x3:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }
    // Variables para registrar la fila con la mayor suma
    int mayorSuma = -999999; // Empezamos con un número muy bajo
    int filaMayorSuma = 0;
    cout << "\n--- Suma de cada fila ---\n";
    // 3. Recorrer cada fila para calcular su suma
    for (int i = 0; i < 4; i++) {
        int sumaFilaActual = 0; // Se reinicia en cero para cada nueva fila
        for (int j = 0; j < 3; j++) {
            sumaFilaActual += matriz[i][j]; // Suma los 3 elementos de la fila
        }
        cout << "Fila " << i + 1 << " suma: " << sumaFilaActual << endl;
        // 4. Comparar si la fila actual es la que tiene la mayor suma
        if (sumaFilaActual > mayorSuma) {
            mayorSuma = sumaFilaActual;
            filaMayorSuma = i; // Guarda cuál fila fue
        }
    }
    // 5. Mostrar el resultado final
    cout << "\n--------------------------------------------------\n";
    cout << "La fila con la mayor suma es la Fila: " << filaMayorSuma + 1 << endl;
    cout << "La suma total de esa fila es: " << mayorSuma << endl;
    cout << "--------------------------------------------------\n";
    return 0;
}
