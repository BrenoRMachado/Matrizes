#include <iostream>
using namespace std;

int main ()
{
    int tam;
    cout << "Escreva tam: " <<endl;
    cin >> tam;
    int **mat;

    mat = new int*[tam];

    for( int i = 0 ; i <= tam ; i++)
    {
        mat[i] = new int[4];
    }

    for (int i =0 ; i < tam; i++)
    {
        for(int j = 0 ; j < 4; j++)
        {
            if(j%2 == 0)
                mat[i][j] = 0;
            else 
                mat[i][j] = 1;
        }
    }
    for (int i =0 ; i < tam; i++)
    {
        cout << endl;
        for(int j = 0 ; j < tam; j++)
        {
           cout <<  mat[i][j] << " ";
        }
    }
}