#include <iostream>
#include "matriz.h"
using namespace std;

int main ()
{   
    //ler 25 valores reais e gerar uma matriz 5x5
    Matriz mat(3,3); // gera a matriz

    float v = 0; //valor que vai ser atribuido
    for (int i = 0 ; i< 3 ;i++)
    {
        for(int j = 0; j<3 ; j++)
        {
            cout << "Escreva qual o valor do elemento " << i << " " << j << " : " <<endl;
            cin >> v;
            mat.set(i,j,v);
        }
    }

    //imprime a 4 coluna (vou usar 2, pq vou fazer um de 3 linhas e colunas)
    // 4 coluna é quando j = 3

    //impressão geral
    for (int i = 0 ; i< 3 ;i++)
    {
        cout <<endl;
        for(int j = 0; j<3 ; j++)
        {
            cout << mat.get(i,j)<< " ";
        }
    }
    //impressão da 2 coluna
    for (int i = 0 ; i< 3 ;i++)
    {
        cout <<endl;
        for(int j = 0; j<3 ; j++)
        {
            if ( j == 1)
                cout << mat.get(i,j)<< " ";
        }
    }

    

    return 0;
}