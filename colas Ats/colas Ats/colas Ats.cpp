

#include <iostream>
#include <queue>
#include <stack>
using namespace std;
#include < stdlib.h>
#include<conio.h>
struct Nodo {
    int ado;
    Nodo* sguiente;
};

void insertar(Nodo*&, Nodo*&, int n);
bool cola(Nodo *);
void sup(Nodo*&, Nodo*&, int&);
int main()
{
    Nodo* frente = NULL;
    Nodo* fin = NULL;
    int i;
    cout << "de numero" << endl;
    cin >> i;
    cout << "de numero" << endl;
    cin >> i;
    cout << "de numero" << endl;
    cin >> i;
    insertar(frente, fin, i);
    cout << " eleimnado\n";
    while (frente!= NULL)
    {
        sup(frente, fin, i);
        if (frente != NULL) {
            cout << i << " ," << endl;
        }
        else {
            cout << i << ". \n";
        }
    }

    return 0;
}
void insertar(Nodo*& frente, Nodo*& fin, int n) {
    Nodo* nuebo = new Nodo();
    nuebo->ado = n;
    nuebo->sguiente= NULL;
    if (cola(frente)) {
        frente = nuebo;
    }
    else {
        fin->sguiente = nuebo;
    }
    fin = nuebo;
    cout << n << " ha sido insertado\n";
}
bool cola(Nodo* frente) {
    return (frente == NULL)?true: false;
}
void sup(Nodo*& frente, Nodo*& fin, int& n) {
    n = frente->ado;
    Nodo* aux = frente;
    if (frente == fin) {
        frente = NULL;
        fin = NULL;
    }
    else {
        frente = frente->sguiente;
    }
    delete aux;
}