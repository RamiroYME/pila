#include <iostream>
#include <vector>
#include <string>
//#include "piloaleneal.h"

int main()
{
    const int capacidad = 10;
    std::vector<int>elementos(capacidad);
    int cima = -1;
    std::cout << "Tecla elemento de la pila (termina con-1)\n";
    int x = 0;
    const int CLAVE = -1;
    while (x != CLAVE)
    {
        string entrada;
        cout << "ingrese el valor : \n";
        cin >> entrada;
        try {
            x = stoi(entrada);//Convertimos Sring to Int 
            if (cima < capacidad - 1) {
                cima++;
                elemento[cima] = x;
            }
            else {
                cout << "Pila llena \n";
                break;
            }
        }
        catch (const invalid_argument&) {
            cout << "Entrada invalidad \n"
        }
        if (cima >= 0) {
            cout << "Elementos de la pila\n";
            while (cima >= 0) {
                x = elementos[cima];
                cima--;
                cout << x << " ";
            }
        }
        else {
            cout << "Pila Vacia \n";
        }
        return 0;
    }