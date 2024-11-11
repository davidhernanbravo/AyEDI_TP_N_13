#include <iostream>

using namespace std;

bool esPrimo(int numero);

int main() 
    {
        const int TAMANO = 25; // Hay 25 números primos entre 1 y 100.
        int primos[TAMANO];
        int indice = 0;

        // Llena el array con números primos entre 1 y 100.
        for (int i = 1; i <= 100; i++) 
            {
                if (esPrimo(i)) 
                    {
                        primos[indice] = i;
                        indice++;
                    }
            }

        cout << "ARRAY DE NUMEROS PRIMOS DEL 1 AL 100" << endl << endl;

        // Muestra los números primos en consola.
        for (int i = 0; i < indice; i++) 
            {
                cout << primos[i] << " ";
            }

        cout << endl;
        
        return 0;
    }

// Función para verificar si un número es primo.
bool esPrimo(int numero) 
    {
        if (numero <= 1) return false;

        for (int i = 2; i * i <= numero; i++) 
            {
                if (numero % i == 0) return false;
            }

        return true;
    }