#include <iostream>
#include "matriz.h"
using namespace std;

int main ()
{   
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

    //impressão geral
    for (int i = 0 ; i< 3 ;i++)
    {
        cout <<endl;
        for(int j = 0; j<3 ; j++)
        {
            cout << mat.get(i,j)<< " ";
        }
    }

    //ler indice de linha, indice de coluna e um valor real e alterar a posição correspondente da matriz
    int linha = 0;
    int coluna = 0;
    int valor = 0;
    cout << "\nEscreva em qual linha e coluna tu quer trocar por qual valor: "<<endl;
    cout << "linha: ";
    cin >> linha;
    cout << "coluna: ";
    cin >> coluna;
    cout << "valor: ";
    cin >> valor;
    cout << mat.get(linha,coluna)<< endl;
    mat.set(linha,coluna,valor);
    cout << mat.get(linha,coluna)<<endl;

    return 0;
}