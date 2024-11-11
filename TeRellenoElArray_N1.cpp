#include <iostream>

using namespace std;

int main() 
    {
        const int TAMANO = 100;
        int numeros[TAMANO];

        // Llena el array con los primeros 100 números enteros.
        for (int i = 0; i < TAMANO; i++) 
            {
                numeros[i] = i + 1;
            }
        
        cout << "ARRAY DE NUMEROS DEL 1 AL 100" << endl << endl;
        
        // Muestra los números en consola.
        for (int i = 0; i < TAMANO; i++) 
            {
                cout << numeros[i] << " ";
            }

        cout << endl;
        return 0;
    }