#include <iostream>
#include "vetFlex.h"

using namespace std;

// construtor e destrutor -------------------------------------------
VetFlex :: VetFlex(int a, int b)
{
    start = a;
    end = b;
    n = (b - a) + 1;
    vet = new double[n];  
}

VetFlex :: ~VetFlex()
{
    delete [] vet;
}
// ------------------------------------------------------------------

// métodos ----------------------------------------------------------
int VetFlex :: detind(int indice)
{
    cout << "teste 4" << endl;

    if ( start <= indice && indice <= end )
        return indice - start;
    else 
        return -1;
    
}
// ------------------------------------------------------------------

// getters e setters ------------------------------------------------
float VetFlex :: get(int indice)
{
    cout << "teste 5" <<endl;
    int i = detind(indice);
    if ( i != -1)
        return vet[i];
    else
        cout << "indice invalido"<< endl;
        exit(1);

}

void VetFlex :: set(int indice, float valor)
{
    cout << "teste 6" <<endl;
    int i = detind(indice);
    if(i != -1)
        vet[i] = valor;
    else 
        cout << "indice inválido" <<endl;
        exit(1);
}
// -----------------------------------------------------------------