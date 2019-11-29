#include <iostream>
#include "Complexe.h"
using namespace std;

int main()
{

    Complexe c;

    c.afficher(c);

    Complexe c1(1,2);

    c1.afficher(c1.add(c1));

    return 0;
}
