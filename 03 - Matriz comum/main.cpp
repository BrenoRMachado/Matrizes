#include <iostream>
#include "matriz.h"
using namespace std;

int main ()
{   
    //ler 25 valores reais e gerar uma matriz 5x5
    Matriz mat(5,5); // gera a matriz

    float v = 0; //valor que vai ser atribuido
    for (int i = 0 ; i< 5 ;i++)
    {
        for(int j = 0; j<5 ; j++)
        {
            cout << "Escreva qual o valor do elemento " << i << " " << j << " : " <<endl;
            cin >> v;
            mat.set(i,j,v);
        }
    }

    //imprime a 4 coluna 
    // 4 coluna é quando j = 3

    //impressão geral
    for (int i = 0 ; i< 5 ;i++)
    {
        for(int j = 0; j<5 ; j++)
        {
            cout << mat.get(i,j)<< endl;
        }
    }
    //impressão da 4 coluna
    for (int i = 0 ; i< 5 ;i++)
    {
        for(int j = 0; j<5 ; j++)
        {
            if ( j == 3)
                cout << mat.get(i,j)<< endl;
        }
    }

    return 0;
}