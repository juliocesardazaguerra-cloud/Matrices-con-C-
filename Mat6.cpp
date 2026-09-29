#include <iostream>
//6. Leer una matriz 4x4 entera y calcular el promedio de los números mayores de cada fila

using namespace std;

int main() {
    // 1. Declarar la matriz de 4x4
    int matriz[4][4];

    // 2. Leer los 16 números ingresados por el usuario
    cout << "Por favor, ingresa los numeros para la matriz 4x4:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Variable para ir acumulando la suma de los números mayores
    int sumaMayores = 0;

    cout << "\n--- Numeros mayores de cada fila ---\n";

    // 3. Recorrer la matriz fila por fila para encontrar el mayor de cada una
    for (int i = 0; i < 4; i++) {
        // Aplicamos la lógica correcta: el récord inicial es el primer elemento de la fila actual
        int mayorDeEstaFila = matriz[i][0]; 

        for (int j = 1; j < 4; j++) {
            if (matriz[i][j] > mayorDeEstaFila) {
                mayorDeEstaFila = matriz[i][j]; // Actualiza el número mayor de la fila
            }
        }

        cout << "El numero mayor de la Fila " << i + 1 << " es: " << mayorDeEstaFila << endl;
        
        // Sumamos este número mayor al acumulador total
        sumaMayores += mayorDeEstaFila;
    }

    // 4. Calcular el promedio (usamos float para permitir decimales en la división)
    float promedio = (float)sumaMayores / 4.0;

    // 5. Mostrar el resultado final
    cout << "\n--------------------------------------------------\n";
    cout << "La suma de los numeros mayores es: " << sumaMayores << endl;
    cout << "El promedio de los numeros mayores es: " << promedio << endl;
    cout << "--------------------------------------------------\n";

    return 0;
}
