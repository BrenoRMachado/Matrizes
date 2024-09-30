#include <iostream>
#include "matriz.h"
using namespace std;

int main ()
{   
    Matriz mat(3,4); // gera a matriz


    float v = 0; //valor que vai ser atribuido
    for (int i = 0 ; i< 3 ;i++)
    {
        for(int j = 0; j<4 ; j++)
        {
            cout << "Escreva qual o valor do elemento " << i << " " << j << " : " <<endl;
            cin >> v;
            mat.set(i,j,v);
        }
    }

    //impressão geral
    for (int i = 0 ; i< 3 ;i++)
    {
        cout <<endl;
        for(int j = 0; j<4 ; j++)
        {
            cout << mat.get(i,j)<< " ";
        }
    }

    //imprimeir a transposta 
    mat.transposta(&mat);

    return 0;
}