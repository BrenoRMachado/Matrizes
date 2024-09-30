#include <iostream>
#include "matriz.h"
using namespace std;


// construtores -------------------------------------------------
MatrizLin :: MatrizLin(int m, int n)
{
    mm = m;
    nn = n;

    vet = new float[mm*nn];
}

MatrizLin :: ~MatrizLin()
{
    delete [] vet;
} 
// --------------------------------------------------------------

// detInd -------------------------------------------------------
// verifica validade de indices e ela vai converter os indices
int MatrizLin :: detInd(int linha, int coluna)
{
    if (linha > 0 && linha < mm && coluna > 0 && coluna < nn)
        return (nn * linha) + coluna; //fórmula do k
    else 
        return -1; //indice inválido
}
// --------------------------------------------------------------

// getters e setters --------------------------------------------
float MatrizLin ::get(int i, int j)
{
    int k = detInd(i,j);
    if ( k != -1)
    {
        return vet[k];
    }
    else 
    {
        cout << "Erro: get" <<endl;
        exit(1);
    }

}

void MatrizLin :: set(int i, int j, float valor)
{
    int k = detInd(i,j);
    if (k != -1)
    {
        vet[k] = valor;
    }
    else 
        cout << "Erro: get" <<endl;
        exit(1);
}
// --------------------------------------------------------------