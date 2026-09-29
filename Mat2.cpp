#include <iostream>
//2. Leer una matriz 4x4 entera y determinar cuántas veces se repita en ella el número mayor
using namespace std;
int main() {
    // 1. Declarar la matriz de 4x4 y las variables de control
    int matriz[4][4];
    int contadorRepeticiones = 0;
    // 2. Leer los 16 números ingresados por el usuario
    cout << "Por favor, ingresa los numeros para la matriz 4x4:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }
    // 3. Primer recorrido: Encontrar el número mayor de la matriz
    int numeroMayor = matriz[0][0]; // Empezamos asumiendo que el primero es el mayor
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > numeroMayor) {
                numeroMayor = matriz[i][j];
            }
        }
    }
    // 4. Segundo recorrido: Contar cuántas veces se repite ese número mayor
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == numeroMayor) {
                contadorRepeticiones++;
            }
        }
    }
    // 5. Mostrar los resultados finales en pantalla
    cout << "\n--------------------------------------------------\n";
    cout << "El numero mayor encontrado es: " << numeroMayor << endl;
    cout << "Este numero se repite: " << contadorRepeticiones << " vez/veces." << endl;
    cout << "--------------------------------------------------\n";
    return 0;
}
