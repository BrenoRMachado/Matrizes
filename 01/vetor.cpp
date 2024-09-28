#include <iostream>
#include "vetor.h"
using namespace std;

// (construtor e destrutor) --------------------------------------
Vetor :: Vetor(int tam)
{
    //inicialização do n ( pode ser feita no .h)
    int n = 0;
    //tam tem que ser maior que 0
    if (n<tam)
    {
        n = tam;
    }
    //se for um valor inválido o vetor vai ter tamanho tam
    vet = new float[tam];
}

Vetor :: ~Vetor()
{
    delete [] vet;
}
// ---------------------------------------------------------------

// getters e setters ---------------------------------------------
    float Vetor :: get(int indice)
    {
        if (verifica(indice))
        {
            return vet[indice];
        }
        else 
        {
            cout << "indice invalido (get)" <<endl;
            exit(1);
        }
    }
    void Vetor :: set(int indice, float valor)
    {
        if (verifica(indice))
        {
            vet[indice] = valor;
        }
        else 
        {
            cout << "indice invalido (set)"<<endl;
        }
    }
// ---------------------------------------------------------------

// métodos -------------------------------------------------------
bool Vetor :: verifica(int indice)
{
    //verifica se um indice é válido 
    // indice vai de 0 a n-1 sempre
    if ( indice >= 0 && indice < n)
        return true;
    else 
        return false;
}
//