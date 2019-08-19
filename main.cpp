#include <iostream>

#include "listas_enlazadas/list.h"
#include "listas_enlazadas/list.cpp"
#include "arboles_binarios/abb.cpp"

using namespace std;

int main()
{
    ABB arbol = NULL;
    int x;
    List list;
    int ele;
    cout << "Digite un número " << endl;
    cin >> ele;
    switch(ele)
    {
        case 1:
            cout << " Ingrese valor : ";  cin>> x;
            insertar( arbol, x);
            cout << " Ingrese valor : ";  cin>> x;
            insertar( arbol, x);
            cout << " Ingrese valor : ";  cin>> x;
            verArbol(arbol, 0);
            cout<<" Valor a eliminar: "; cin>> x;
            elimina(arbol, x);
            cout << "\n\tEliminado..!";
            verArbol(arbol, 0);
            break;

        case 2:
            break;
        case 3:
            break;
        default:
            break;
    }


    return 0;
}

