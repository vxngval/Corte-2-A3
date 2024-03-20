#include <iostream>
using namespace std;

int main() 
{
    int tamano;
    cout << "Ingrese la cantidad de numeros  que desea ordenar: ";
    cin >> tamano;


    int lista[tamano];
    int i;


    for(i = 0; i < tamano; i++) 
    {
        cout << "N�mero " << (i+1) << ": ";
        cin >> lista[i];
    }


    for(i = 1; i < tamano; i++) 
    {
        int valor_actual = lista[i];
        int j = i - 1;
        while(j >= 0 && lista[j] > valor_actual) 
        {
            lista[j + 1] = lista[j];
            j--;
        }
        lista[j + 1] = valor_actual;
    }


    cout << "\nLista Ordenada: ";
    for(i = 0; i < tamano; i++) 
    {
        cout << lista[i] << " ";
    }
    
    
    cout << endl;
    return 0;
}
