#include <iostream>
#include "matriz.h"
using namespace std;

int main ()
{
    int m, n;
    cout << "Escreva o numero de linhas: ";
    cin >> m;
    cout << "Escreva o numero de colunas: ";
    cin >> n;

    MatrizLin mat(m,n);

    for ( int i = 0 ; i<m ; i++)
    {
        for(int j = 0 ; i<n ; j++)
        {
            float valor = j + (n*i);
            mat.set(i,j,valor);
        }
    }
    for ( int i = 0 ; i<m ; i++)
    {
        for(int j = 0 ; i<n ; j++)
        {
            float valor = mat.get(i,j);
            cout << valor << "\t";
        }
        cout<<endl;
    }

    return 0;
}