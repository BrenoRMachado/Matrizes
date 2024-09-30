#include <iostream>
#include "vetFlex.h"

using namespace std;

int main ()
{
    int a = -33, b = 30;

    VetFlex vet1(a,b);

    cout << "teste"<<endl;

    for(int i = a; i < b ; i++)
    {
        double val = (i - a) + 1;
        vet1.set(i,val);
    }

    cout << "teste 2" << endl;

    for(int i = a; i<b ; i++)
    {
        double val = vet1.get(i);
        cout << val <<endl;
    }

    cout << "teste 3" << endl;

    return 0;
}