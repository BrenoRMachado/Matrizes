#include <iostream>
#include "vetor.h"
using namespace std;

int main ()
{
    int tam = 60;
    Vetor vet(tam);

    for (int i = 0; i<tam ; i++)
    {
        vet.set(i,i+1);
    }
    for (int i = 0; i<tam ; i++)
    {
        float imprime = vet.get(i);
        cout << imprime <<endl;
    }
    return 0;
}