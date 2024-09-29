#include <iostream>
#include "vetFlex.h"

using namespace std;

int main ()
{
    int a = -33, b = 30;

    VetFlex vet1(a,b);

    for(int i = a; i < b ; i++)
    {
        double val = (i - a) + 1;
        vet1.set(i,val);
    }

    for(int i = a; i<b ; i++)
    {
        double val = vet1.get(i);
        cout << val <<endl;
    }

    return 0;
}