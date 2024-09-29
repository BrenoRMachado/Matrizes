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
    if ( start <= indice && indice <= end )
        return indice - 1;
    else 
        return -1;
    
}
// ------------------------------------------------------------------

// getters e setters ------------------------------------------------
float VetFlex :: get(int indice)
{
    int i = detind(indice);
    if ( i != -1)
        return vet[i];
    else
        cout << "indice invalido"<< endl;
        exit(1);

}

void VetFlex :: set(int indice, float valor)
{
    int i = detind(indice);
    if(i != -1)
        vet[i] = valor;
    else 
        cout << "indice inválido" <<endl;
        exit(1);
}
// -----------------------------------------------------------------