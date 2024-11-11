#include <iostream>

using namespace std;

int main() 
    {
        const int TAMANO = 50; // Hay 50 números impares entre 1 y 100.
        int impares[TAMANO];
        int indice = 0;

        // Llena el array con números impares entre 1 y 100.
        for (int i = 1; i <= 100; i += 2) 
            {
                impares[indice] = i;
                indice++;
            }

        cout << "ARRAY DE NUMEROS IMPARES DEL 1 AL 100" << endl << endl;

        // Muestra los números impares en pantalla.
        for (int i = 0; i < indice; i++) 
            {
                cout << impares[i] << " ";
            }

        cout << endl;
        return 0;
    }