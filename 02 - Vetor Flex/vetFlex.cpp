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
    {
        
    }
}
// ------------------------------------------------------------------

// getters e setters ------------------------------------------------

// -----------------------------------------------------------------