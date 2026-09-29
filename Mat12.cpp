#include <iostream>
#include <cmath> // Para usar abs() por si hay números negativos
//12. Leer una matriz 5x5 entera y determinar en qué fila está el mayor número terminado en 6.
using namespace std;

int main() {
    int matriz[5][5];
    int mayor_terminado_en_6;
    int fila_mayor = -1;
    bool encontrado = false;

    // 1. Leer la matriz 5x5
    cout << "Ingrese los elementos de la matriz 5x5:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    // 2. Buscar el mayor número terminado en 6
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int numero_actual = matriz[i][j];
            
            // Verificamos si termina en 6 usando el residuo de la división entre 10
            if (abs(numero_actual) % 10 == 6) {
                // Si es el primero que encontramos, o si es mayor que el anterior guardado
                if (!encontrado || numero_actual > mayor_terminado_en_6) {
                    mayor_terminado_en_6 = numero_actual;
                    fila_mayor = i + 1; // Guardamos la fila (sumamos 1 para que sea más humano: fila 1 a 5)
                    encontrado = true;
                }
            }
        }
    }

    // 3. Mostrar el resultado
    cout << "\n--- RESULTADO ---" << endl;
    if (encontrado) {
        cout << "El mayor numero terminado en 6 es: " << mayor_terminado_en_6 << endl;
        cout << "Se encuentra en la fila: " << fila_mayor << endl;
    } else {
        cout << "No se encontro ningun numero que termine en 6 en la matriz." << endl;
    }

    return 0;
}
