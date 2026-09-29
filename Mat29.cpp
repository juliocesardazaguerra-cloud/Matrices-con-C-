#include <iostream>
//29. Leer una matriz 4x6 entera y determinar si 
//alguno de sus números está repetido al menos 3 veces.
using namespace std;

int main() {
    int matriz[4][6];
    bool encontrado_repetido_3_veces = false;

    // 1. Leer la matriz 4x6
    cout << "--- INGRESE LOS DATOS DE LA MATRIZ (4x6) ---" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    // 2. Buscar si algún número se repite al menos 3 veces
    // Recorremos cada casilla de la matriz para tomar un número de prueba
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            int numero_a_contar = matriz[i][j];
            int contador = 0;

            // Volvemos a recorrer toda la matriz para contar cuántas veces aparece ese número
            for (int x = 0; x < 4; x++) {
                for (int y = 0; y < 6; y++) {
                    if (matriz[x][y] == numero_a_contar) {
                        contador++;
                    }
                }
            }

            // Si el contador llega a 3 o más, encontramos lo que buscábamos
            if (contador >= 3) {
                encontrado_repetido_3_veces = true;
                break; // Rompe el ciclo interno
            }
        }
        if (encontrado_repetido_3_veces) {
            break; // Rompe el ciclo externo si ya lo encontramos
        }
    }

    // 3. Mostrar el resultado
    cout << "\n--- RESULTADO ---" << endl;
    if (encontrado_repetido_3_veces) {
        cout << "SI, al menos un numero de la matriz se repite 3 o mas veces." << endl;
    } else {
        cout << "NO, ningun numero se repite 3 o mas veces." << endl;
    }

    return 0;
}
