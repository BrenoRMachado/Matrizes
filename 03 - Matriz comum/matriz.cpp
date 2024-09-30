#include <iostream>
#include "matriz.h"
using namespace std;

// construtor e destrutore ----------------------------------------------------------------
Matriz :: Matriz(int tamp, int tamf)
{
    //associação das variáveis da classe com os parÂmetros
    p = tamp; // tamanho do vetor de ponteiros
    f = tamf; // tamanho dos vetores filhos

    //criação do vetor de ponteiros
    // int ** mat = new int*[tamp];  ERRADO, para de inicializar no construtor
    // o problema é que esse mat só vai existir nesse escopo, então cria no matriz.h

    mat = new float*[p]; //criação de um vetor de ponteiros que apontam para vetores

    // criação do vetor de cada ponteiro
    for (int i = 0 ; i < p ; i++)
    {
        mat[i] = new float[f]; //criação dos vetores filhos
    }

    //inicialização dos vetores filhos

    for(int i = 0 ; i < p ; i++)
    {
        for(int j = 0 ; j < f ; j++)
        {
            mat[i][j] = 0;
        }
    }
}

Matriz :: ~Matriz()
{
    for(int i = 0 ; i< p ; i++)
    {
        delete [] mat[i];
    }
    delete [] mat;
}
// ----------------------------------------------------------------------------------------

// metodos --------------------------------------------------------------------------------

bool Matriz :: verificaIndices(int tamp, int tamf)
{
    if(tamp > 0 && tamf > 0)
        return true;
    else
        return false;
}

// ----------------------------------------------------------------------------------------

// getters e setters ----------------------------------------------------------------------

float Matriz :: get(int indi, int indj)
{   
    return mat[indi][indj];
}
void Matriz :: set(int indi, int indj, float valor)
{
    mat[indi][indj] = valor;
}
// ----------------------------------------------------------------------------------------