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

bool Matriz :: verificaIndices(int indi, int indj)
{
    if(indi >= 0 && indj >= 0 && indi < p && indj <f)
        return true;
    else
        return false;
}


void Matriz :: transposta(Matriz *mat)
{
    float ** transMat = new float*[mat->f];
    for (int i = 0; i < mat->f; i++)
    {
        transMat[i] = new float[mat->p];
    }
    // os tamanhos p e f trocaram de lugar por causa do conceito de transposta

    for (int i = 0; i< mat->p; i++)
    {
        for(int j = 0 ; j < mat->f ; j ++)
        {
            transMat[j][i] = mat->mat[i][j];
        }
    }
}

// ----------------------------------------------------------------------------------------


// getters e setters ----------------------------------------------------------------------

float Matriz :: get(int indi, int indj)
{   
    if(verificaIndices(indi,indj))
        return mat[indi][indj];
    else
    {
        cout << "Indice inválido"<<endl;
        exit(1);
    }
    

}
void Matriz :: set(int indi, int indj, float valor)
{   
    if(verificaIndices(indi,indj))
        mat[indi][indj] = valor;
    else
    {
        cout << "Indice inválido"<<endl;
        exit(1);
    }
}
// ----------------------------------------------------------------------------------------